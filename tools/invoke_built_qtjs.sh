#!/bin/sh

MYDIR=$(dirname "$(readlink -f "$0")")
TOPDIR="$MYDIR/.."

export LD_LIBRARY_PATH="$TOPDIR/lib/cpgf/lib:$TOPDIR/build/src/core:$TOPDIR/build/src/widgets:$TOPDIR/build/src/qml:$TOPDIR/build/src/gui"

"$TOPDIR/build/src/runner/qtjs" "$@"

exit $?

