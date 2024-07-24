#include <linked_list.h>

int main(void) {
    linked_list* llist = llist_init();
    llist_add(llist, 5);
    llist_print(llist);
    return 0;
}
