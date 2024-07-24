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
void llist_add(linked_list* list, int element);
int llist_get(linked_list* list, unsigned int idx);
void llist_remove_index(linked_list* list, unsigned int idx);
void llist_remove_element(linked_list* list, int element);
void llist_insert(linked_list* list, unsigned int idx, int element);
void llist_print(linked_list* list);
void free_llist(linked_list* list);

#endif
