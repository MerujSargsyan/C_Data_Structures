#!/bin/bash
CC="gcc"
CFLAGS="-Wall -Wextra"

mkdir -p ./bin ./lib

$CC $CFLAGS -I./include -c "./code/$1.c" -o "./lib/$1.o"
$CC $CFLAGS -o "./bin/$1_test" "./test/$1_test.c" "./lib/$1.o"
