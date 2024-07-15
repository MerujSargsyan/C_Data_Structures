#include <list.h>
#include <stdio.h>

int main(void) {
    List* list = list_init(5);
    printf("size: %d\n", list->capacity);
    return 0;
}
