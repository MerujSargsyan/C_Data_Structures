#ifndef LIST_H
#define LIST_H

#include <list.h>

typedef struct List {
    int* values;
    unsigned int size;
    unsigned int capacity;
} List;
#endif
