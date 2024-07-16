#include <list.h>
#include <stdio.h>

int main(void) {
    List* list = list_init(5);
    list_add(list, 5);
    list_print(list);
    return 0;
}
