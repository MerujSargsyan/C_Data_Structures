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

// TODO
Linked_list* llist_init();
// TODO
void llist_add(Linked_list* list, int element);
// TODO
int llist_get(Linked_list* list, unsigned int idx);
// TODO
void llist_remove_index(Linked_list* list, unsigned int idx);
// TODO
void llist_remove_element(Linked_list* list, int element);
// TODO
void llist_insert(Linked_list* list);
// TODO
void llist_print(Linked_list* list);
// TODO
void free_llist(Linked_list* list);
