#!/bin/bash
CC="gcc"
CFLAGS="-Wall -Wextra"

mkdir -p bin

$CC $CFLAGS -o "./bin/list" "./code/list.c"
$CC $CFLAGS -o "./bin/linked_list" "./code/linked_list.c"

$CC $CFLAGS -o "./bin/list_test" "./test/list_test.c"
