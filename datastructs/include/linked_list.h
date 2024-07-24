#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
    int val;
    struct Node* next;
} Node;

typedef struct linked_list {
    Node* head;
    unsigned int size;
} linked_list;

linked_list* llist_init();

// add element to end of list
void llist_add(linked_list* list, int element);

// returns the element idx
// idx must be within bounds
int llist_get(linked_list* list, unsigned int idx);

// removes the element at idx
// idx must be within bounds
void llist_remove_i(linked_list* list, unsigned int idx);

//removes the first occurance of element in list
void llist_remove_e(linked_list* list, int element);

// insert element at idx
// idx must be within bounds
void llist_insert(linked_list* list, unsigned int idx, int element);

// prints out list in format: [a, b, c, ... ]
void llist_print(linked_list* list);

// free the dynamic linked list
void free_llist(linked_list* list);

#endif
