#ifndef MY_ALLOC
#define MY_ALLOC malloc
#endif

#ifndef MY_FREE
#define MY_FREE free
#endif

#include <linked_list.h>

linked_list* llist_init() {
    linked_list* llist = malloc(sizeof(linked_list));
    llist->head = NULL;
    llist->size = 0;
    return llist;
}

Node* make_node(int element) {
    Node* n = malloc(sizeof(Node));
    n->val = element;
    n->next = NULL;
    return n;
}

void llist_add(linked_list* list, int element) {
    Node* dummy = list->head;
    if(!dummy) {
        list->head = make_node(element);
        list->size++;
        return;
    }
    while(dummy && dummy->next) {
        dummy = dummy->next;
    }
    dummy->next = make_node(element);
    list->size++;
}

int llist_get(linked_list* list, unsigned int idx) {
    if(idx >= list->size) {
        printf("idx out of bounds, junk value returned");
        return -1;
    }
    Node* dummy = list->head;
    unsigned int i = 0;
    while(dummy && i < idx) {
        dummy = dummy->next;
        i++;
    }
    return dummy->val;
}

void llist_print(linked_list* list) {
    Node* dummy = list->head;
    printf("Linked List contents: ");
    while(dummy) {
        printf("%d ", dummy->val);
        dummy = dummy->next;
    }
    printf("\n");
}
