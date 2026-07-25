# mirror_pr.ps1 -- mirror a fork PR head into a base-repo branch so
# workflow_dispatch can see it (dispatch targets base-repo refs only), with
# SANITIZE-BY-DEFAULT (design D1, R24): the mirror push is ITSELF a push event,
# so a contributor-added `on: push` workflow would execute AT THE PUSH, before
# any review -- therefore by default this script REPLACES .github/workflows/
# with main's copy before pushing; the untrusted workflow never EXISTS on the
# pushed branch (capability-level, not intention-level).
#
# -KeepWorkflows = maintainer-reviewed content ONLY, after a line-by-line
# review of EVERY workflow file changed on the branch, explicitly including
# each `permissions:` key (R21/R22). Without the flag the script will never
# push a branch whose workflows differ from main's -- the post-sanitize verify
# refuses (fail-closed) if the replacement somehow left a delta.
#
# The working tree is never touched: all surgery happens in a throwaway
# git worktree. The mirror branch creator deletes the branch after the verdict
# (branch-scoped caches die with the ref).

param(
    [Parameter(Mandatory)][int]$Pr,
    [switch]$KeepWorkflows,
    [string]$Remote = 'origin'
)

Set-StrictMode -Version Latest
$ErrorActionPreference = 'Stop'

$branch = "mirror/pr-$Pr"
git fetch $Remote "pull/$Pr/head" | Out-Host
if ($LASTEXITCODE -ne 0) { throw "fetch of pull/$Pr/head failed" }
$head = (git rev-parse FETCH_HEAD).Trim()
git fetch $Remote main | Out-Host
if ($LASTEXITCODE -ne 0) { throw 'fetch of main failed' }

$delta = @(git diff --name-only "$Remote/main" $head -- .github/workflows)
if ($delta.Count -gt 0) {
    Write-Host "workflow delta vs main on PR #${Pr}:"
    $delta | ForEach-Object { Write-Host "  $_" }
    if ($KeepWorkflows) {
        Write-Host '--- permissions: keys in the branch workflows (REVIEW EACH) ---'
        git grep -n 'permissions' $head -- .github/workflows | Out-Host
        Write-Host '-KeepWorkflows given: pushing the branch workflows AS-IS (reviewed content only).'
    } else {
        Write-Host 'sanitize-by-default: replacing .github/workflows with main''s copy.'
    }
} else {
    Write-Host "no workflow delta vs main on PR #$Pr."
}

$wt = Join-Path ([System.IO.Path]::GetTempPath()) "multivoid-mirror-pr-$Pr"
if (Test-Path $wt) { git worktree remove --force $wt 2>$null; Remove-Item -Recurse -Force $wt -ErrorAction SilentlyContinue }
git worktree add --detach $wt $head | Out-Host
if ($LASTEXITCODE -ne 0) { throw 'worktree add failed' }
try {
    if (-not $KeepWorkflows) {
        # Remove the branch's workflows entirely, then restore main's copy --
        # this also deletes PR-ADDED files that a plain checkout would leave.
        if (Test-Path (Join-Path $wt '.github/workflows')) {
            git -C $wt rm -r -q --ignore-unmatch .github/workflows | Out-Host
            Remove-Item -Recurse -Force (Join-Path $wt '.github/workflows') -ErrorAction SilentlyContinue
        }
        git -C $wt checkout "$Remote/main" -- .github/workflows 2>$null
        # (main may have no workflows yet; that is a legal state -- then the
        # sanitized branch has none either.)
        if (@(git -C $wt status --porcelain).Count -gt 0) {
            git -C $wt commit -q -a -m "mirror: sanitize .github/workflows to main's copy (PR #$Pr)" | Out-Host
            if ($LASTEXITCODE -ne 0) { throw 'sanitize commit failed' }
        }
        # Fail-closed verify: the branch about to be pushed must carry ZERO
        # workflow delta vs main. Refuse to push otherwise.
        $left = @(git -C $wt diff --name-only "$Remote/main" HEAD -- .github/workflows)
        if ($left.Count -gt 0) {
            Write-Host 'REFUSING TO PUSH: workflow delta survived sanitize:'
            $left | ForEach-Object { Write-Host "  $_" }
            exit 1
        }
    }
    git -C $wt push -f $Remote "HEAD:refs/heads/$branch" | Out-Host
    if ($LASTEXITCODE -ne 0) { throw 'push failed' }
    Write-Host "mirrored PR #$Pr -> $branch ($( (git -C $wt rev-parse HEAD).Trim() ))"
    Write-Host "dispatch build.yml against '$branch'; DELETE the branch after the verdict."
} finally {
    git worktree remove --force $wt 2>$null | Out-Null
}
