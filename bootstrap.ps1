# Early development in Windows; This script will be deprecated when bootstrapped build achieved.

# ---------------------
# Note: G++ is required for this script
# ---------------------

$srcDir = 'src/cpp/'
$buildDir = 'build/'
$include = 'src/h/'

# Ordered source files here
$sources = 'framer.cpp'

$sources = $sources | ForEach-Object { "$srcDir$_" }

g++ $sources -I $include -o "$buildDir/framer.exe" -g
