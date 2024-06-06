CFLAGS=-Wall -Wextra -g -std=gnu99 
BINDIR=../bin

default: main_hash_map

hash_map: 
	gcc $(CFLAGS) -I../list -c hash_map.c 

main_hash_map: main_hash_map.c
	gcc $(CFLAGS) -I../list -c $<
	gcc $(CFLAGS) -o $(BINDIR)/$@ main_hash_map.o hash_map.o ../list/list.o

run:
	$(BINDIR)/main_hash_map

