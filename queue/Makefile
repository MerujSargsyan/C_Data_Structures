CFLAGS = -Wall -g -std=gnu99
BINDIR = ../bin
LL_DIR = ../linked_list

default = main_queue

queue.o: queue.c queue.h 
	gcc $(CFLAGS) -I$(LL_DIR) -c -o $@ $< 

main_queue: main_queue.c
	gcc $(CFLAGS) -I$(LL_DIR) -c -o main_queue.o $<
	gcc $(CFLAGS) -o $(BINDIR)/main_queue main_queue.o queue.o $(LL_DIR)/linked_list.o

run: 
	$(BINDIR)/main_queue

valgrind: $(BINDIR)/main_queue
	valgrind $(BINDIR)/main_queue
