# tag_regex_selftest.ps1 -- the tag-grammar fixture (design D3): MUST-MATCH rows
# with expected parse fields + MUST-REFUSE near-twins. Runs in every release
# judge pass and locally. Exit 0 = all rows hold; exit 1 = grammar drifted.

Set-StrictMode -Version Latest
$ErrorActionPreference = 'Stop'
. (Join-Path $PSScriptRoot 'ledger_lib.ps1')

$fail = 0

$mustMatch = @(
    @{ Tag = 'v0.9.0n-b122';     Game = '0.9.0n'; N = 122; Dev = $false },
    @{ Tag = 'v0.9.0n-b123-dev'; Game = '0.9.0n'; N = 123; Dev = $true },
    @{ Tag = 'v1.0.0-b200';      Game = '1.0.0';  N = 200; Dev = $false }
)
foreach ($c in $mustMatch) {
    $p = ConvertFrom-ReleaseTag $c.Tag
    if (-not $p) { Write-Host "FAIL must-match refused: $($c.Tag)"; $fail++; continue }
    if ($p.Game -ne $c.Game -or $p.N -ne $c.N -or $p.Dev -ne $c.Dev) {
        Write-Host "FAIL must-match parsed wrong: $($c.Tag) -> game=$($p.Game) n=$($p.N) dev=$($p.Dev)"; $fail++
    } else {
        Write-Host "ok   match  $($c.Tag) -> game=$($p.Game) n=$($p.N) dev=$($p.Dev)"
    }
}

$mustRefuse = @(
    'v0.9.0n-b12-devx',   # trailing junk after -dev
    'v0.9.0nb12',         # missing -b separator
    'b12dev',             # no v<game> prefix
    'b122',               # bare number
    'v0.9.0n-b012',       # leading zero
    'v0.9.0n-b0',         # zero build
    'v0.9.0n-b12-DEV',    # case matters
    'v0.9.0n-b12 '        # trailing whitespace
)
foreach ($t in $mustRefuse) {
    $p = ConvertFrom-ReleaseTag $t
    if ($p) { Write-Host "FAIL must-refuse matched: '$t'"; $fail++ }
    else    { Write-Host "ok   refuse '$t'" }
}

if ($fail -gt 0) { Write-Host "tag_regex_selftest: $fail row(s) FAILED"; exit 1 }
Write-Host 'tag_regex_selftest: all rows hold'
exit 0
