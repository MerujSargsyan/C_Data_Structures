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

void llist_print(linked_list* list) {
    Node* dummy = list->head;
    printf("linked list values: ");
    while(dummy) {
        printf("%d ", dummy->val);
        dummy = dummy->next;
    }
    printf("\n");
}
