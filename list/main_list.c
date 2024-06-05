#include <stdio.h>

#include "list.h"

int main(void) {
    List* list = list_init(5);
    list_add(list, 1);
    list_remove_element(list, 75);
    list_insert(list, 69, 0);
    list_print(list);
    free_list(list);
    return 0;
}
