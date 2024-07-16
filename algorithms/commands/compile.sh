#!/bin/bash
CC="gcc"
CFLAGS="-Wall -Wextra -std=gnu99"
INCLUDE="-I./include"

mkdir -p ./bin ./lib

$CC $CFLAGS $INCLUDE -c "./code/$1.c" -o "./lib/$1.o"
$CC $CFLAGS $INCLUDE -o "./bin/$1_test" "./test/$1_test.c" "./lib/$1.o"
