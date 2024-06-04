CFLAGS = -Wall -g -std=gnu99
BINDIR = ../bin

default = $(BINDIR)/main_linked_list

%.o: %.c
	gcc $(CFLAGS) -c -o $@ $<

$(BINDIR)/main_linked_list: main_linked_list.o linked_list.o | $(BINDIR)
	gcc $(CFLAGS) -o $@ main_linked_list.c linked_list.o

run: $(BINDIR)/main_linked_list
	$(BINDIR)/main_linked_list

valgrind: $(BINDIR)/main_linked_list
	valgrind $(BINDIR)/main_linked_list
