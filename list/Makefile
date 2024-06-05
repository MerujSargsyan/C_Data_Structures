CFLAGS = -Wall -Wextra -g -std=gnu99
BINDIR = ../bin

default: $(BINDIR)/main_list

%.o: %.c
	gcc $(CFLAGS) -c -o $@ $<

$(BINDIR)/main_list: main_list.o list.o | $(BINDIR)
	gcc $(CFLAGS) -o $@ main_list.c list.o 

run: $(BINDIR)/main_list
	$(BINDIR)/main_list

valgrind: $(BINDIR)/main_list
	valgrind $(BINDIR)/main_list
