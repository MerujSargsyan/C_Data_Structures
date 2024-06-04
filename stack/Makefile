CFLAGS = -Wall -g -std=gnu99
BINDIR = ../bin
LL_DIR = ../linked_list

default = main_stack 

stack.o: stack.c stack.h 
	gcc $(CFLAGS) -I$(LL_DIR) -c -o $@ $< 

main_stack: main_stack.c
	gcc $(CFLAGS) -I$(LL_DIR) -c -o main_stack.o $<
	gcc $(CFLAGS) -o $(BINDIR)/main_stack main_stack.o stack.o $(LL_DIR)/linked_list.o

run: $(BINDIR)/main_stack
	$(BINDIR)/main_stack
