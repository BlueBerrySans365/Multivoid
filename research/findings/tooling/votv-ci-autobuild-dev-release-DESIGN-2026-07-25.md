# CI autobuild + dev-release design (PR #2 basis) — /qf pass 1, 15/15 rounds, NOT YET CONVERGED

> 2026-07-25. **DESIGN, not built.** The /qf 15 pass reached its round cap with round 15 still
> producing material questions (all three answered with spec changes below); per the ritual, cap !=
> convergence. **Owed next session: confirmation rounds on THIS doc until a genuine "that holds",
> then build.** Thread: session scratchpad `qf_thread.md` (15 rounds + user injection) — session-temp;
> THIS DOC carries the substance, §9 carries the round digest for PRIOR-ROUNDS reconstruction.

## 1. What the user actually asked for

GitHub user **huoyan1231** opened PR #2 ("add autobuild", +129-line `.github/workflows/build.yml`:
nightly cron on windows-latest + vcpkg, DLLs as login-gated Actions artifacts, Chinese comments).
The owner asked (RU, compressed): do we need it; will we go into GitHub debt (org repo, "как mtablue");
"Я тоже бы хотел билды типа dev experimental выпускать в релизах, но это только dev experimental, это
неполноценный релиз. Как назвать его тоже надо подумать ... или может короче".

USER DECISIONS (all 2026-07-25, in-session):
- Billing fear resolved: public repos = free unlimited Actions (billing is private-repo only). No debt possible.
- Nightly cron rejected ("нам не надо билдить каждую ночь ведь это тупо").
- Name = **"dev"** (approved from the recommendation set). Tag format `v<game>-b<N>-dev` + title
  "Multivoid <game> b<N>-dev" — user-approved.
- Moving-target CI-rebuilt bytes for dev releases — user-approved.
- The human-only consume ritual (R6 reframe) — user-approved.
- **MANUAL-ONLY builds**: "можно сами будем когда захотим запускать билд процесс — так лучше".
- PR #2: **accept + hard-edit INSIDE it** ("мы примем его и свою редактуру жесткую проведем").

## 2. Measured fact base

- **PR #2 diff read in full**: nightly cron + dispatch; selective submodule init `src/votv-coop/third_party`
  only (reference/* never fetched); opus clone fallback citing BUILDING.md; vcpkg C:\vcpkg clone+bootstrap+
  unshallow, skip-if-exists; static cache key; vcpkg_installed keyed on hashFiles(vcpkg.json); vswhere
  generator detect; Release build; upload Release/*.dll; no secrets; only github.com clones. Author
  demonstrably built the project post-cc0ab911 [inferred from real-error citations in his comments].
- **ParseBuildNumber** (`src/votv-coop/src/loader/xinput_proxy.cpp:47-58`): requires trailing `-<digits>.dll`
  else -1/never loaded; scan pattern `multivoid-*.dll` (:88); highest build wins (:100-105); reads ONLY the
  trailing digits => build numbers collide ACROSS game targets; a `-dev` filename suffix would never load.
- **CMake identity** (`src/votv-coop/CMakeLists.txt:16-37,566-570`): OUTPUT_NAME `multivoid-<game>-<build>`;
  kProtocolVersion regex-parsed from protocol.h; configure re-runs on protocol.h change. kProtocolVersion=125.
- **docs/RELEASE.md**: every release bumps proto; publish DLL + xinput1_3.dll + SHA256; step 5 = master env
  op (`COOP_LATEST_PROTO/MOD`) — STABLE-only by design; ZERO releases shipped yet.
- **master.rs:64-74,774-780**: `/v1/latest` serves env constants; the master NEVER scrapes GitHub.
- **session_manager.cpp:210-240**: client verdicts — proto<=0 silent; ==ours "(latest)"; >ours amber UPDATE;
  <ours **"(dev; latest released bN)"** — an in-game dev surface ALREADY EXISTS, computed relationally,
  never stored.
- **STALE LITERALS FOUND (fix owed)**: pre-rebrand `github.com/pelmentor/VOTV_MP/releases` at
  `session_manager.cpp:230` AND `:463` (s29b sweep miss; only these two repo-wide — verified by grep).
- **.gitmodules complete**: 4 build gitlinks (GNS fa489fd/v1.5.1, imgui, minhook, opus) all registered
  (opus since cc0ab911, on origin/main); freetype/miniaudio = vendored trees (040000), no init needed.
- **gh auth status**: token scopes include `workflow`. **gh pr view 2**: `maintainerCanModify: true`.
- Platform facts: public Actions free; `releases/latest` excludes prereleases/drafts; GITHUB_TOKEN pushes
  suppress workflow triggers; workflow_dispatch targets base-repo refs only; on push/tag events the
  event's commit supplies the workflow YAML; tags/releases are deletable objects; scheduled workflows
  auto-disable after 60 idle days (moot — no cron).
- vcpkg.json: builtin-baseline 9b965a11; protobuf 3.21.12 override (double-abseil avoidance).
  BUILDING.md: MSVC match between vcpkg-protobuf and project generator is load-bearing
  (`__std_*_trivial_N` link errors).

## 3. The design (v15)

### D1. Triggers
- CI builds: **workflow_dispatch ONLY** (user decision). Contribution CI = fetch `pull/N/head` into a
  base-repo branch (dispatch can't see fork refs), REVIEW the workflow diff BEFORE dispatching, branch
  creator deletes the branch after the verdict (cache scope dies with the ref).
- Releases: tag-push `v<game>-b<N>[-dev]` -> a THIN TRAMPOLINE YAML that calls the reusable
  **release-core @main** (refusal logic always executes from main HEAD — the tag's own YAML would judge
  retags with OLD logic). Second entry point: `workflow_dispatch(tag)` for no-run recovery.

### D2. CI build job (PR #2 steps as basis, reworked)
English comments; vcpkg at OUR OWN path (never C:\vcpkg — the runner preinstalls a drifting copy there
[inferred, confirm at acceptance]) pinned to an explicit vcpkg release tag; builtin-baseline stays the
package pin; full-history clone (versions DB needs it); cache keys include ImageVersion + detected VS
toolset (closes the stale-cache MSVC trap; the MSVC match is INTERNAL to one run — green does not require
VS18 specifically); submodule init `src/votv-coop/third_party` only; artifact ZIP name carries the commit
sha (DLL inside stays canonical); artifacts = CI evidence, NOT distribution (documented unsupported);
payload DLL + xinput1_3.dll; 30-day retention; the LEDGER LINT (see D3) runs here too.
Acceptance gates: (1) one green dispatch run on a branch BEFORE the workflow lands on main;
(2) one-time CI-bytes smoke (download artifact -> deploy to install folders -> standing LAN smoke)
before the FIRST dev release.

### D3. Release-core (@main)
- **CACHELESS cold build** (kills fork-branch cache poisoning + cleaner provenance; releases are rare).
- **SELF-CHECK every run**: checkout#1 HEAD == tag sha; checkout#2 HEAD == origin/main HEAD (checkout
  semantics in reusable workflows = inferred; first drill measures it, every run re-asserts).
- **Early fingerprint refusal**: runner's MSVC toolset + Windows SDK (vswhere/env dump) vs the committed
  fingerprint file read from MAIN HEAD (semantics: "the runner toolchain whose CI bytes were last proven
  runnable" — a property of NOW; a mid-ritual image roll -> refusal -> re-smoke -> fingerprint commit ->
  plain re-run; numbers never burn from rolls).
- **Refuse-to-publish preconditions**: tag-commit proto == N == tag number; main HEAD proto > N; main's
  LEDGER carries the b<N> consume row binding {build, game, tagName, sourceSha, date, class} with sha+game
  compared (retag allowed only TOWARD the row's sha); N unique vs union(consume rows, burn rows, tags,
  releases) — triggering tag excluded; absent ledger = valid empty start.
- **LEDGER** (file on main; the single mint authority for dev AND stable; append-only, HUMAN-written):
  grammar `consume | burn | drill | retracted`. published = consume + live release; burn = never-published
  number killed; retracted = published-then-deleted (bytes were public); lone consume = transient in-flight.
  **LINT** (every dispatch build + every release run): burn x live-release = FAIL reconcile; published
  release without matching consume row (sha) = FAIL; aged lone consume = WARN "annotate". Uniqueness rides
  ledger-RECORDED history, never the deletable API.
- **DRAFT-FIRST publish**: draft -> assets -> SHA256 verify -> flip (prerelease for -dev, full for bare).
  READ-BACK asserts after flip: release.prerelease == tag shape; `releases/latest` != this dev tag —
  TRI-STATE with labeled vacuity (LATEST_404 = no stable yet, logged, never silent-green; LATEST_OK_DIFFERENT;
  LATEST_IS_THIS = FAIL). Re-runs delete stale DRAFTS only; published releases are never workflow-deleted.
- **Global concurrency group "release"** (cancel-in-progress: false) — full serialization.
- Regex selftest fixture: MUST-MATCH (v0.9.0n-b122, v0.9.0n-b123-dev) + MUST-REFUSE near-twins
  (v0.9.0n-b12-devx, v0.9.0nb12, b12dev, bare b122, leading-zero).
- Release body: source commit + SHA256 (+ "development build, not hands-on verified" for dev).
- STABLE extra: workflow summary prints the exact master-env values to paste; the rewritten RELEASE.md
  checklist ends with `tools/release/verify_latest.ps1` (curl /v1/latest, compare proto+mod to the newest
  STABLE consume row; drilled to FAIL pre-env-step and PASS post-env-step).

### D4. The ritual (human consumes, robot verifies — R6 reframe, user-approved)
Tag HEAD (proto N) -> commit "consume b<N>" (bump N->N+1 + ledger row) -> `git push --atomic origin main <tag>`
(one leak-audited push) -> WATCH the run to green; the checklist is not done until the release page shows
the asset + SHA256. Refusals are stateless (plain re-run); wrong-commit tag -> retag toward the row's sha
pre-publish; wrongly chosen number -> BURN row (append-only never reversed; numbers are cheap). No robot
writes to main, ever (the R3-R5 auto-bump machinery was DISSOLVED by the reframe — do not build it).

### D5. Naming (user-approved)
dev is OUTSIDE the identity: the (game, build) pair + ledger uniqueness maps b<N> 1:1 to one release page.
DLL filename stays canonical `multivoid-<game>-<build>.dll` [measured: loader rejects suffixes]. No new
in-game dev marker (a second version axis = the retired mod-semver mistake); the existing relational
"(dev; latest released bN)" line covers the surface. COOP_LATEST_PROTO stays stable-only.

### D6. Bytes (user-approved tradeoff)
Published bytes = CI rebuild of the tagged source (public Actions provenance; moving target accepted).
Human gate: dev tag only after the standing local pre-handoff checklist on the same commit. Fingerprint
updates are human-committed after re-smoking CI bytes.

### D7. Security posture
No repo secrets anywhere. Release job `permissions: contents: write` (Release API only). **v* TAG RULESET**:
creation/move restricted to the repo admin, github-actions excluded (robot capability-restricted, not just
intention-restricted). Main protection: force-push OFF, deletion OFF, require-PR OFF (the daily direct-push
flow survives). All third-party actions PINNED by full commit SHA. NAMED RESIDUALS (accepted, documented):
(a) the release token could push main = rewrite its own refusal authority — mitigations: push-restriction
ruleset attempted at acceptance (dropped if it frictions the daily flow), SHA-pinned actions kill the
supply-chain vector, any such push is a visible github-actions commit caught by the daily pull;
(b) contrib-branch caches are branch-scoped [inferred] and releases are cacheless anyway.

### D8. PR #2 handling (user-decided)
ACCEPT + hard-edit INSIDE the PR: our rework commits pushed onto huoyan1231's branch — MEASURED VIABLE
(token has workflow scope; maintainerCanModify true). Merge only after the acceptance run is green; the
author keeps contributor credit; main never carries the cron version. Fallback on residual rejections:
cherry-pick his commit (authorship preserved), supersede + close #2 with thanks.

### D9. Stale-literal fix owed
`github.com/pelmentor/VOTV_MP/releases` at session_manager.cpp:230 AND :463 -> current URL (or drop the
hardcoded fallback in favor of the compiled default). Ship alongside the workflow build.

### D10. Repo settings
Main branch protection (force-push/deletion OFF) + the v* tag ruleset (D7).

## 4. Drill matrix (before the gate is trusted; real repo, numbers b9000+, ledger class=drill, run prefix "drill:", tags admin-deleted after; drills never publish except the one publish drill)

| Drill | Expected |
|---|---|
| proto != N (tag at wrong commit) | refusal log line |
| missing ledger row (tag without consume) | refusal |
| fingerprint mismatch (poison+revert on main) | refusal pre-build |
| duplicate number (re-tag a consumed N) | refusal |
| robot tag creation from a workflow | platform ruleset rejection |
| ritual atomic push (the drill's own setup) | MUST-PASS |
| main advanced past consume (next bump landed) | MUST-PASS |
| dispatch-recovery on an existing tag | MUST-PASS publish path |
| kill mid-upload -> re-run | stale draft deleted, resumed |
| second concurrent run | queued (concurrency group), then duplicate refusal |
| ONE-TIME PUBLISH DRILL (b9000-dev, body "DRILL") | read-back asserts + page shows asset+SHA256 + latest unchanged; then admin deletes, RETRACTED row |
| verify_latest.ps1 pre-env / post-env | FAIL then PASS |
| checkout self-check assert | both HEADs logged correct |

## 5. Build plan (after convergence)

1. D9 literal fix + `tools/release/` scripts (verify_latest.ps1, ledger lint, regex fixture selftest).
2. Rework inside PR #2: build.yml (dispatch-only CI) + release-trampoline.yml + release-core.yml + ledger
   file seed + fingerprint file seed; English comments; credit note.
3. Repo settings: main protection + v* tag ruleset (+ push-restriction ruleset attempt).
4. Acceptance: green dispatch on a branch; CI-bytes smoke; drill matrix; then merge PR #2.
5. Rewrite docs/RELEASE.md onto the ledger ritual (both classes; one mint authority).
6. First real dev release when the user wants one.

## 6. Round digest (PRIOR QF ROUNDS — for the confirmation pass's brief)

R1 cross-release uniqueness -> CI enumeration; "proven" laundering conceded -> acceptance gates; bytes
tradeoff stated; dev outside identity. R2 vcpkg tool pin = wrong knob -> own path + explicit tag; submodules
measured complete; bump-before leaves window-after -> number consumed; naming provenance clarified.
R3 artifact lane = no new class (wire rule governs; sha in ZIP); always-red main rejected -> auto-bump
(later dissolved); one-time CI-bytes smoke; bare-number key + tags consume + fixture. R4 token-push trigger
suppression; fingerprint gate wired; master/latest MEASURED (existing dev line; pelmentor literals found);
moving-target on veto; D8 accept+edit (user aside). R5 COOP_LATEST_PROTO stable-only measured; idempotent
bump script (later dissolved); append-only ledger born (deletable tags); fingerprint on toolset only.
**R6 REFRAME (user-approved): robot writer -> VERIFIER; one owner of main = human; R3-R5 machinery
dissolved; branch protection; ledger = owning authority. User injected MANUAL-ONLY builds.**
R7 dispatch = base refs only; triggering-tag exclusion + empty-ledger start; --atomic + burned numbers;
fingerprint += SDK. R8 ONE workflow both shapes (single mint); cacheless releases; early fingerprint step;
D8 measured viable (workflow scope + maintainerCanModify). R9 fingerprint from main HEAD (numbers never
burn from image rolls); verify_latest.ps1 named step; MUST-REFUSE fixture rows; contrib-run writables
enumerated + branch deletion owner. R10 ledger binds sha+game; burn rows recorded; refusal drill matrix;
v* tag ruleset (capability not intention). R11 refs read at run time from origin/main; draft-first publish
+ resume drill; same-day surface = ritual final step + failure email; verify_latest drilled both ways.
R12 trampoline @main (event's commit supplies YAML); burns in union forever; public-repo drills b9000+.
R13 main protection sans require-PR (daily flow); read-back asserts (prerelease + latest); one-time publish
drill; ledger lint robot-checked. R14 dispatch-recovery entry point; checkout self-check; RETRACTED row
class (grammar completed). R15 (cap) global concurrency group; tri-state labeled read-back vacuity;
ledger-rewrite residual NAMED + SHA-pinned actions.

## 7. Status

**/qf 15/15, NOT converged** (R15 still material). Owed: confirmation rounds on this doc -> genuine
"that holds" -> build per §5. Nothing built this session; no DLL/proto change; PR #2 untouched (no reply
posted yet — the thanks + plan reply goes out when the rework starts, per D8).
