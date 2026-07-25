# verify_latest.ps1 -- the STABLE-ritual closing check (design D3): after the
# master env constants are updated, /v1/latest must report exactly the newest
# published stable. Fold-aware (R23): "the newest BARE-tag row whose state(N)
# == PUBLISHED" -- a retracted N has a published row too; the terminal closes
# it. Drilled to FAIL pre-env-step and PASS post-env-step at the first real
# stable ritual (deferred drill, R22).

param(
    [string]$LedgerPath = (Join-Path $PSScriptRoot 'LEDGER.tsv'),
    [string]$MasterLatestUrl = ''   # default: derived from kOfficialMasterUrl in protocol.h
)

Set-StrictMode -Version Latest
$ErrorActionPreference = 'Stop'
. (Join-Path $PSScriptRoot 'ledger_lib.ps1')

if (-not $MasterLatestUrl) {
    # ONE definition of the master endpoint (protocol.h); schemeless = TLS.
    $repoRoot = Split-Path -Parent (Split-Path -Parent $PSScriptRoot)
    $hdr = Get-Content (Join-Path $repoRoot 'src/votv-coop/include/coop/net/protocol.h') -Raw
    $m = [regex]::Match($hdr, 'kOfficialMasterUrl\s*=\s*"([^"]+)"')
    if (-not $m.Success) { throw 'kOfficialMasterUrl not found in protocol.h' }
    $MasterLatestUrl = "https://$($m.Groups[1].Value)/v1/latest"
}

$expected = Get-NewestStablePublished -Rows (Read-Ledger -Path $LedgerPath).Rows

Write-Host "verify_latest: querying $MasterLatestUrl"
$resp = $null
try { $resp = Invoke-RestMethod -Uri $MasterLatestUrl -TimeoutSec 15 } catch {
    Write-Host "verify_latest: FAIL -- master unreachable: $($_.Exception.Message)"
    exit 1
}
$masterProto = 0
if ($resp -and ($resp.PSObject.Properties.Name -contains 'proto')) { $masterProto = [int]$resp.proto }

if ($null -eq $expected) {
    if ($masterProto -le 0) {
        Write-Host 'verify_latest: OK_EMPTY -- no stable published in the ledger; master has no released record (proto<=0)'
        exit 0
    }
    Write-Host "verify_latest: FAIL -- master reports proto=$masterProto but the ledger has NO published stable (unrecorded release?)"
    exit 1
}

Write-Host "verify_latest: ledger newest stable = N=$($expected.N) game=$($expected.Game) tag=$($expected.TagName)"
Write-Host "verify_latest: master reports proto=$masterProto mod='$($resp.mod)'"
if ($masterProto -ne $expected.N) {
    Write-Host "verify_latest: FAIL -- master proto $masterProto != ledger stable N $($expected.N) (env constants not updated / stale?)"
    exit 1
}
Write-Host 'verify_latest: PASS'
exit 0
