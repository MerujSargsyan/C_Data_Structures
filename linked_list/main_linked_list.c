#include <stdio.h>

#include "linked_list.h"

int main(void) {
    Linked_list* llist = llist_init(); 
    llist_add(llist, 1);
    llist_add(llist, 2);
    llist_add(llist, 3);
    printf("output: %d\n", llist_get(llist, 1));
    printf("output: %d\n", llist_get(llist, 3));
    llist_print(llist);
}
