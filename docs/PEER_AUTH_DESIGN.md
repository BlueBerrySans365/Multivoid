# PEER_AUTH_DESIGN — peer authentication for LAN coop sessions

**Status: DESIGN — no code written.** This document is the design-only
specification for the peer authentication system. Implementation details live
in `docs/security/PLAN_01_PEER_AUTH.md` (the root fix plan) and its
associated tracker rows.

**Cross-references:**
- `docs/security/THREAT_MODEL.md` — adversary model + assets
- `docs/security/PLAN_01_PEER_AUTH.md` — the root fix plan (CA + GNS certs)
- `docs/security/SUBSTRATE.md` — measured facts (GNS unauthenticated, certstore)
- `docs/security/DECISIONS.md` — decisions retracted and standing
- `docs/COOP_METHODOLOGY.md` — RULE 1 (no crutches), RULE 2 (no baggage)
- `src/votv-coop/include/coop/net/protocol.h` — wire format, version bumps
- `src/votv-coop/include/coop/net/session.h` — session lifecycle

---

## 1. Threat Model

Derived from `THREAT_MODEL.md` §1–§2. The adversaries, in descending
likelihood for a LAN coop session:

| # | Adversary | Capability | LAN-specific shape |
|---|---|---|---|
| 1 | **Unauthorized peer** | Joins the LAN broadcast or guesses the host port; no credentials needed today | Trivial — any machine on the subnet can connect |
| 2 | **Peer impersonation** | Spoofs a trusted peer's slot after it disconnects; reuses a stale epoch | Moderate — needs knowledge of the slot assignment but no crypto |
| 3 | **Man-in-the-middle** | ARP spoofing on the LAN segment; relays GNS traffic between host and victim | Low — requires physical network access + active interception |
| 4 | **Replay attacker** | Captures a valid connect handshake and replays it to rejoin | Low — GNS epoch (v16) catches stale packets, but no signature proves freshness |

**Assets at risk** (from `THREAT_MODEL.md` §2):

1. **Privacy of voice + text chat** — an unauthorized peer eavesdrops on
   proximity voice and reads T-chat messages.
2. **Integrity of the host's world/save** — an unauthorized peer can
   modify doors, lights, interactables, and (pre-arbiter) corrupt the
   host's save state via rogue prop/entity packets.
3. **Availability of the session** — an unauthorized peer can flood the
   host or occupy a slot, blocking a legitimate player.

**Out of scope** (from `THREAT_MODEL.md` §3):

- Mechanical cheaters in a trusted group (social problem, not engineering).
- Ban evasion by identity change (no accounts exist).
- Confidentiality of the lobby list (public by design).

---

## 2. Ed25519 Key Management

### 2.1 Why Ed25519

- Fast sign/verify (~8k ops/sec on modest hardware — negligible for
  handshake use).
- Small keys (32-byte public, 64-byte private, 64-byte signature).
- No CA infrastructure needed for 4-player coop — peer-to-peer trust is
  sufficient.
- Already linked into the process via GNS (`SUBSTRATE.md` §2):
  `crypto_25519.h` `GenerateSignature` / `VerifySignature`.

### 2.2 Key generation

On **first launch**, the mod generates an Ed25519 keypair:

- Private key: 64 bytes, stored at `coop_key.bin` in the save directory
  (same directory as `multivoid.ini` — `coop::config::ModuleDir()`).
- Public key: 32 bytes, derived from the private key at load time.
- Generation uses `std::random_device` for seed material, fed into
  `crypto_25519.h` `GenerateSignature`'s keygen path.
- The key is per-install, not per-account. Reinstalling generates a new
  key (equivalent to a new machine identity).

### 2.3 Key persistence

- Private key is written once and never rotated during normal operation.
- If `coop_key.bin` is missing or corrupted, a new keypair is generated
  on the next launch (graceful degradation — the peer loses its prior
  trust relationships).
- The private key must never leave the local process. It is not sent
  over the wire, not logged, not written to any shared location.

### 2.4 Trust model

The trust model is **Trust On First Use (TOFU)**, not a CA hierarchy:

- The host maintains a trust list: a set of known public keys (one per
  previously-trusted peer).
- When a peer first connects, its public key is presented. The host
  records it as "trusted" on the host operator's approval (or
  automatically for the first N peers in a locked-down session).
- On subsequent connections, the host verifies the presented key matches
  the stored one. Mismatch = rejected.

This matches the 4-player LAN constraint: the host knows their players.
No revocation infrastructure is needed — the host can delete a stale
entry from the trust list manually.

### 2.5 Key storage on host

The host's trust list is a simple file in the save directory:

- `coop_trust_list.bin` — a flat array of `{ public_key[32], nickname_hash[16] }`
  entries (48 bytes each, up to 32 entries — more than enough for a
  rotating 4-player group).
- The trust list is LOCAL to the host. It is never sent over the wire.
- Host can clear the trust list to reset all trust relationships (a
  "wipe all keys" button in the admin panel).

---

## 3. Session Handshake

### 3.1 Current handshake (as-built, protocol v138)

The current connect sequence is:

```
Client                          Host
  |                               |
  |--- GNS Connect -------------->|  (transport-level, AES-256-GCM encrypted)
  |<-- GNS Connected -------------|
  |                               |
  |--- AssignPeerSlot ----------->|  (ReliableKind::AssignPeerSlot, host->client)
  |    {slot, hostElementId}      |     slot = FindFreePeerSlotForClient()
  |                               |
  |--- Join --------------------->|  (ReliableKind::Join, client->host)
  |    {senderElementId, nick}    |     client stamps its own Player Element id
  |                               |
  |<-- PlayerJoined --------------|  (ReliableKind::PlayerJoined, host->all)
  |    {slot, nick, elementId}    |     broadcast to all connected peers
  |                               |
  |<-- ConnectEdge snapshot ----->|  (bracket: SnapshotBegin -> PropSpawn* -> SnapshotComplete)
  |                               |     world state catch-up for the joiner
```

GNS handles transport encryption (AES-256-GCM) and the Diffie-Hellman
key exchange. But `IP_AllowWithoutAuth = 2` means **no peer
authentication** — any machine on the network can complete the GNS
handshake and enter the session.

### 3.2 Proposed additions (peer auth layer)

Add a **public key exchange + signature challenge** between the GNS
Connected event and the AssignPeerSlot:

```
Client                          Host
  |                               |
  |--- GNS Connect -------------->|  (encrypted, unauthenticated)
  |<-- GNS Connected -------------|
  |                               |
  |  [NEW] AuthKeyExchange ------>|  (ReliableKind::AuthKeyExchange)
  |    {pubkey[32], nonce[16]}    |     client sends its public key + random nonce
  |                               |
  |  [NEW] AuthChallenge -------->|  (ReliableKind::AuthChallenge, host->client)
  |    {challenge_nonce[16]}      |     host sends a fresh random challenge
  |                               |
  |  [NEW] AuthResponse --------->|  (ReliableKind::AuthResponse, client->host)
  |    {signature[64]}            |     client signs challenge_nonce with its private key
  |                               |
  |  [Host verifies signature]    |  ed25519_verify(client_pubkey, challenge, sig)
  |                               |
  |--- AssignPeerSlot ----------->|  (only if auth passes)
  |--- Join --------------------->|
  |--- PlayerJoined ------------->|
  |--- ConnectEdge snapshot ----->|
```

**Wire costs:**
- AuthKeyExchange (127): 32 + 16 = 48 bytes (client -> host)
- AuthChallenge (128): 16 bytes (host -> client)
- AuthResponse (129): 64 bytes (client -> host)
- Total: 128 bytes, one additional round-trip before slot assignment.

### 3.3 Why host signs client's public key = "trusted peer"

The host's verification of the signature proves:
- The client possesses the private key corresponding to the presented
  public key (proof of possession).
- The response is fresh (the challenge nonce was generated by the host
  for this specific connection attempt).

If the public key is in the host's trust list, the peer is admitted.
If not, the host can either:
- Reject the connection (locked session), or
- Queue the peer for manual approval (admin panel popup).

The host does NOT need to present a signature to the client — the client
already trusts the host by IP/address. The host's identity is the
machine the client chose to connect to.

### 3.4 Epoch integration

The existing `senderEpoch` (v16, 32-bit per-peer session epoch) provides
replay protection for in-flight packets. The new auth handshake
complements it:

- The epoch catches **stale packets** from a previous connection on the
  same slot.
- The auth handshake catches **unauthorized connections** that never
  completed the challenge.

Both are needed. The epoch is cheap (header field, zero extra RTT). The
auth handshake is a deliberate security gate.

---

## 4. Lobby Locking

### 4.1 Problem

Currently, any peer that can reach the host's port can join. On a LAN,
this means any machine on the subnet. On a public server (future), this
means anyone with the lobby address.

### 4.2 Host-side trust enforcement

The host maintains a **session lock mode** (one of three states):

| Mode | Behavior | UI label |
|---|---|---|
| **Open** | Any peer can join (current behavior). Auth key exchange runs but is informational only — no rejection on unknown key. | "Open to all" |
| **Trusted** | Only peers whose public key is in the trust list can join. Unknown keys are rejected with a "not authorized" message. | "Trusted peers only" |
| **Approval** | Unknown keys are queued for host approval. The host sees a popup: "Player X wants to join. Allow?" | "Ask to join" |

Default mode is **Trusted** (the host's trust list gates access). The
host can change the mode via the admin panel.

### 4.3 Lock mode wire signal

The host broadcasts its current lock mode to connected peers so the UI
can display it. This is a `ReliableKind::SessionLockMode` packet
(host -> all clients, on change + connect-edge):

- `uint8_t mode` — 0 = Open, 1 = Trusted, 2 = Approval.
- Displayed in the roster panel so players know the session's access
  policy.

### 4.4 Host failover potential

The auth system enables future host failover:

- If the host disconnects, any trusted peer can be promoted to host.
- The trust list can be transferred (encrypted) to the new host.
- The new host verifies existing peers against the same trust list.

This is explicitly **NOT in scope now** — it is a benefit that falls
out of the auth design naturally. Documented so the design does not
close the door on it.

---

## 5. Incremental Rollout

Three phases, each independently shippable and independently reversible
(same shape as `PLAN_01_PEER_AUTH.md` §3 arcs):

### Phase 1 — Key generation + exchange (no enforcement)

**What ships:**
- Ed25519 keypair generation on first launch (`coop_key.bin`).
- AuthKeyExchange + AuthChallenge + AuthResponse packets on the wire.
- Host logs the presented public key and whether it is trusted.
- No rejection. No trust list. No lock mode.

**Purpose:** validate the wire protocol, measure the latency cost,
confirm ed25519 sign/verify performance, and collect data on key
stability across reconnects.

**Protocol version:** bump `kProtocolVersion` per standing rule
(`protocol.h` comment). New ReliableKinds: AuthKeyExchange (127),
AuthChallenge (128), AuthResponse (129). Slots 127–129 are the next
available after AtvOccupied = 126 (v138).

**Acceptance:**
- Two peers connect; the auth handshake completes in one extra RTT.
- Host logs "peer pubkey: <hex> (trusted: unknown)" for each connection.
- No behavioral change — all peers are admitted regardless of key.

### Phase 2 — Signature verification (log mismatches)

**What ships:**
- Host-side ed25519 signature verification on AuthResponse.
- Host logs "SIGNATURE VALID" or "SIGNATURE INVALID" for each
  connection attempt.
- Trust list file (`coop_trust_list.bin`) is written on first successful
  auth (host records the public key).
- Still no rejection — invalid signatures are logged but the peer is
  admitted (observability before enforcement).

**Purpose:** confirm signature verification works end-to-end, identify
any edge cases (key format issues, timing, nonce handling), and build
confidence before enforcement.

**Acceptance:**
- A peer presenting a valid signature logs "SIGNATURE VALID".
- A peer presenting a garbage signature logs "SIGNATURE INVALID".
- The trust list file is created and contains the first peer's key.

### Phase 3 — Reject untrusted peers

**What ships:**
- Host-side enforcement: unknown or invalid signatures are rejected with
  a human-readable close reason ("Not authorized — add this peer's key to
  the trust list").
- Session lock mode (Open / Trusted / Approval) with admin UI.
- Trust list management in the admin panel (view, add, remove keys).
- `SessionLockMode` broadcast to connected peers.

**Purpose:** full enforcement. Untrusted peers cannot join a Trusted or
Approval session.

**Acceptance:**
- A peer with a trusted key connects successfully.
- A peer with an unknown key is rejected in Trusted mode.
- A peer with an unknown key triggers an approval popup in Approval mode.
- The host can toggle lock mode via the admin panel.

---

## 6. Tradeoffs

### Latency

- **Cost:** one extra round-trip (~1 ms on LAN, ~20–50 ms on WAN) before
  slot assignment.
- **Amortized:** this happens once per connection, not per frame. The
  60 Hz pose stream is unaffected.
- **Assessment:** negligible. The GNS handshake already takes multiple
  round-trips; one more is unnoticeable.

### Complexity

- **Two processes to manage:** key generation + persistence, trust list
  management, session lock mode, three new ReliableKinds.
- **Wire protocol change:** bump `kProtocolVersion` (RULE 2 — no
  migration baggage).
- **Admin UI:** trust list management is new UI surface area.
- **Assessment:** moderate, but bounded. The crypto primitives are
  already linked (`SUBSTRATE.md` §2); the wire packets are small and
  well-typed; the trust list is a flat file.

### Benefit

1. **Unauthorized peer rejection** — the primary motivation. An
   untrusted machine cannot join a Trusted session.
2. **Peer impersonation prevention** — a reconnecting peer must present
   the same private key; slot recycling with a different key is rejected.
3. **Cheat detection foundation** — the trust list creates a persistent
   identity per machine, enabling future per-peer audit logging.
4. **Host failover potential** — trusted peers can be promoted; the trust
   list transfers to the new host.

### What this does NOT protect against

- A malicious **host** (the host is the trust authority; a compromised
  host can admit anyone). This is `PLAN_03_AUTHORITY.md`'s problem.
- A **trusted peer** who cheats within their authority. The auth system
  proves identity, not intent.
- **Man-in-the-middle** on the GNS transport — GNS already encrypts
  (AES-256-GCM). The auth layer operates above transport encryption and
  provides the authentication that GNS lacks by default.

---

## 7. File references

| File | Role in this design |
|---|---|
| `src/votv-coop/include/coop/net/protocol.h` | Wire format; new ReliableKinds go here; version bump |
| `src/votv-coop/include/coop/net/session.h` | Session lifecycle; auth handshake integrates here |
| `src/votv-coop/include/coop/config/config.h` | Key persistence path (`coop_key.bin`) |
| `src/votv-coop/include/coop/config/config_registry.h` | New config rows for lock mode |
| `docs/security/PLAN_01_PEER_AUTH.md` | The root fix plan (CA-based, for WAN) — this design is the LAN complement |
| `docs/security/SUBSTRATE.md` §2 | GNS certstore capabilities already linked |
| `docs/security/THREAT_MODEL.md` | Adversary model and asset ranking |
