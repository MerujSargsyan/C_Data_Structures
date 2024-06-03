#include <stdio.h>

#include "linked_list.h"

int main(void) {
    Linked_list* llist = llist_init(); 
    llist_add(llist, 1);
    llist_add(llist, 3);
    llist_add(llist, 2);
    llist_remove_index(llist, 0);
    llist_remove_index(llist, 0);
    llist_remove_element(llist, 3);
    llist_remove_element(llist, 2);

    printf("output: %d\n", llist_get(llist, 1));
    printf("output: %d\n", llist_get(llist, 3));
    llist_print(llist);
}
