#include <list.h>
#ifndef my_alloc
#define my_alloc malloc
#endif

List* list_init(unsigned int capacity) {
    List* list = my_alloc(sizeof(List));
    list->values = my_alloc(capacity * sizeof(int));
    list->size = 0;
    list->capacity = capacity;
    return list;
}
