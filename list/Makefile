CFLAGS = -Wall -Wextra -g -std=gnu99

default: main

list.o: list.c
	gcc $(CFLAGS) -c -o $@ $<

main: main.c list.o
	gcc $(CFLAGS) -o $@ main.c list.o 
