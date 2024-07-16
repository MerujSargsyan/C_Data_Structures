#include <list.h>
#include <stdio.h>

int main(void) {
    List* list = list_init(5);
    list_add(list, 5);
    list_add(list, 7);
    // [5, 7]

    list_remove_e(list, 5);
    // [7]

    list_add(list, 5);
    // [7, 5]

    list_insert(list, 6, 1);
    // [7, 6, 5]
    
    list_insert(list, 4, 0);
    // [4, 7, 6, 5]

    list_set(list, 3, 0);
    // [3, 7, 6, 5]

    list_remove_i(list, 1);
    // [3, 6, 5]

    list_print(list);
    free_list(list);
    return 0;
}
