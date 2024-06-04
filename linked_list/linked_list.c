#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

// helper
Node* make_node(int val) {
    Node* node = malloc(sizeof(Node));
    node->val = val;
    node->next = NULL;
    return node;
}

Linked_list* llist_init() {
    Linked_list* llist = malloc(sizeof(llist));
    llist->head = NULL;
    llist->size = 0;
    return llist;
}

void llist_add(Linked_list* list, int element) {
    Node* node = make_node(element);
    Node* curr = list->head;
    if(curr == NULL) {
        list->head = node;
        list->size++;
        return;
    }
    while(curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = node;
    list->size++;
}

int llist_get(Linked_list* list, unsigned int idx) {
    if(idx >= list->size) {
        printf("Index out of bounds for llist_get. Junk value returned\n");
        return -1;
    }
    Node* curr = list->head;
    for(unsigned int i = 0; i < idx; i++) {
        curr = curr->next;
    }
    return curr->val;
}

void llist_remove_index(Linked_list* list, unsigned int idx) {
    if(idx >= list->size) {
        printf("Index out of bounds for llist_remove"); 
        return;
    }

    Node* prev = NULL;
    Node* curr = list->head;

    for(unsigned int i = 0; i < idx; i++) {
        prev = curr;
        curr = curr->next;
    }

    if(prev == NULL) {
        list->head = list->head->next;
        list->size--;
        return;
    }
    prev->next = curr->next;
    list->size--;
}

void llist_remove_element(Linked_list* list, int element) {
    Node* curr = list->head;

    int i = 0;
    while(curr != NULL) {
        if(curr->val == element) {
            llist_remove_index(list, i);
            return;
        }
        i++;
        curr = curr->next;
    }
    printf("Element missing from llist\n");
}

// error here
void llist_insert(Linked_list* list, unsigned int idx, int element) {
    if(idx > list->size) {
       printf("Index out of bounds for llist_insert"); 
       return;
    }

    Node* add = make_node(element);

    if(list->size == 0) {
        llist_add(list, element);
        return;
    }
    Node* prev = NULL;
    Node* curr = list->head;
    for(unsigned int i = 0; i < idx; i++) {
        prev = curr;
        curr = curr->next;
    }

    if(prev == NULL) {
        add->next = list->head;
        list->head = add;
        return;
    }

    prev->next = add; 
    add->next = curr;
}

void llist_print(Linked_list* list) {
    Node* curr = list->head;
    printf("Linked List contents: ");
    while(curr != NULL) {
        printf("%d -> ", curr->val);
        curr = curr->next;
    }
    printf("NULL\n");
}

void free_Node(Node* node) {
    if(node == NULL) return;
    free_Node(node->next);
    free(node);
}

void free_llist(Linked_list* list) {
    free_Node(list->head);
    free(list);
}




