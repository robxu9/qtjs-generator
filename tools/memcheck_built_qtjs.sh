#!/bin/sh

MYDIR=$(dirname "$0")
TOPDIR="$MYDIR/.."

export LD_LIBRARY_PATH="$TOPDIR/lib/cpgf/lib:$TOPDIR/build/core:$TOPDIR/build/widgets:$TOPDIR/build/qml:$TOPDIR/build/gui"

valgrind --tool=memcheck --track-origins=yes --leak-check=full --show-reachable=yes --suppressions="$MYDIR"/.valgrind.suppress --gen-suppressions=all --log-file="$TOPDIR/build/memcheck.log" "$TOPDIR/build/runner/qtjs" "$@" &
valgrind --tool=memcheck --track-origins=yes --leak-check=full --show-reachable=yes --suppressions="$MYDIR"/.valgrind.suppress --gen-suppressions=all --xml=yes --xml-file="$TOPDIR/build/memcheck.xml" "$TOPDIR/build/runner/qtjs" "$@" &

wait

exit $?

