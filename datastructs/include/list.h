#ifndef LIST_H
#define LIST_H

#include <list.h>

typedef struct List {
    int* values;
    unsigned int size;
    unsigned int capacity;
} List;

List* list_init(unsigned int capacity);
// add element to end of list
void list_add(List* list, int element);

// returns the element at idx
// idx must be within bounds
int list_get_i(List* list, unsigned int idx);

// returns the fist occurence of element 
// prints error if element not in list
int list_get_e(List* list, int element);

// removes element at idx
// idx must be within bounds
void list_remove_i(List* list, unsigned int idx);

// removes first occurence of element
// prints error if element not in list
void list_remove_e(List* list, int element);

// inserts an element at idx
// idx must be within bounds
void list_insert(List* list, int element, unsigned int idx);

// changes the element at idx to given element
// idx must be within bounds
void list_set(List* list, int element, unsigned int idx);

// prints out list in format: [a, b, c, ... ]
void list_print(List* list);

// frees the dynamic list
void free_list(List* list);
#endif
