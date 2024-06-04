#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>

typedef struct Node Node;
struct Node{
    int val;
    struct Node* next;
};

typedef struct {
    Node* head;
    unsigned int size;
} Linked_list;

Linked_list* llist_init();
void llist_add(Linked_list* list, int element);
int llist_get(Linked_list* list, unsigned int idx);
void llist_remove_index(Linked_list* list, unsigned int idx);
void llist_remove_element(Linked_list* list, int element);
void llist_insert(Linked_list* list, unsigned int idx, int element);
void llist_print(Linked_list* list);
void free_llist(Linked_list* list);

#endif
