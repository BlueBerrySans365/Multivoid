# ledger_lint.ps1 -- the ledger drift detector (design D3 LINT). Runs in every
# CI build (ADVISORY there, R28 -- continue-on-error at the workflow layer) and
# in every release judge pass (ENFORCING).
#
# FAIL rows: ledger parse errors; fold grammar faults (ambiguous mint, ...);
#   burn x live-release; a live release whose N has no matching consume row (sha);
#   a live release on a TERMINAL N.
# WARN rows: aged lone consume ("annotate: publish/burn/retract?"); a v-shaped
#   platform tag that fails the grammar (junk, cannot carry an N).
#
# The GitHub API here is a DRIFT DETECTOR only -- the invariant rides
# ledger-recorded history (the deletable-platform-objects lesson). -SkipApi
# turns the API cross-checks into labeled SKIPs (local offline runs).

param(
    [string]$LedgerPath = (Join-Path $PSScriptRoot 'LEDGER.tsv'),
    [string]$Repo = 'VOTV-MP/Multivoid',
    [int]$LoneConsumeWarnDays = 7,
    [switch]$SkipApi
)

Set-StrictMode -Version Latest
$ErrorActionPreference = 'Stop'
. (Join-Path $PSScriptRoot 'ledger_lib.ps1')

$failCount = 0; $warnCount = 0
function Fail([string]$msg) { Write-Host "LINT FAIL: $msg"; $script:failCount++ }
function Warn([string]$msg) { Write-Host "LINT WARN: $msg"; $script:warnCount++ }

$ledger = Read-Ledger -Path $LedgerPath
foreach ($e in $ledger.Errors) { Fail "parse: $e" }
$rows = $ledger.Rows

$allNs = @($rows | Select-Object -ExpandProperty N -Unique)
$states = @{}
foreach ($n in $allNs) {
    $st = Get-LedgerState -Rows $rows -N $n
    $states[$n] = $st
    foreach ($f in $st.Faults) { Fail "fold: $f" }
    if ($st.State -eq 'EXPECTED' -and $st.ConsumeDate) {
        $age = (Get-Date) - [datetime]::ParseExact($st.ConsumeDate, 'yyyy-MM-dd', $null)
        if ($age.TotalDays -gt $LoneConsumeWarnDays) {
            Warn "N=$n consumed $($st.ConsumeDate) and never closed -- annotate (publish/burn/retract?)"
        }
    }
}

# --- API cross-checks (drift detection) ----------------------------------
if ($SkipApi) {
    Write-Host 'LINT SKIP: API cross-checks (offline run)'
} else {
    $releases = @()
    try {
        $releases = @(gh api "repos/$Repo/releases?per_page=100" --paginate 2>$null | ConvertFrom-Json)
        if ($LASTEXITCODE -ne 0) { throw 'gh api failed' }
    } catch {
        Warn "API unreachable (gh api releases failed) -- drift checks not run this pass"
        $releases = $null
    }
    if ($null -ne $releases) {
        foreach ($rel in $releases) {
            if ($rel.draft) { continue }   # drafts are a run's own scratch, never drift
            $tag = ConvertFrom-ReleaseTag $rel.tag_name
            if (-not $tag) { Warn "live release on non-grammar tag '$($rel.tag_name)' (cannot carry an N)"; continue }
            $st = if ($states.ContainsKey($tag.N)) { $states[$tag.N] } else { Get-LedgerState -Rows $rows -N $tag.N }
            switch ($st.State) {
                'NONE'      { Fail "live release '$($rel.tag_name)' but N=$($tag.N) has NO consume row (unrecorded mint)" }
                'TERMINAL'  { Fail "live release '$($rel.tag_name)' but N=$($tag.N) is terminal ($($st.TerminalClass)) -- reconcile (delete the release?)" }
                default {
                    if ($st.TagName -ne $rel.tag_name) {
                        Fail "live release '$($rel.tag_name)' but the ledger row for N=$($tag.N) names '$($st.TagName)'"
                    } else {
                        $bodySha = Get-ReleaseBodySource $rel.body
                        if ($null -eq $bodySha) { Fail "live release '$($rel.tag_name)' body has no parseable 'source:' key (RELEASE_BODY_UNPARSEABLE)" }
                        elseif ($bodySha -ne $st.SourceSha) { Fail "live release '$($rel.tag_name)' body source $bodySha != ledger sha $($st.SourceSha)" }
                    }
                }
            }
        }
    }
}

Write-Host "ledger_lint: $failCount FAIL, $warnCount WARN ($($rows.Count) rows)"
if ($failCount -gt 0) { exit 1 }
exit 0
