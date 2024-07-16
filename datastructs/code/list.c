#include <list.h>
#ifndef my_alloc
#define my_alloc malloc
#endif

#ifndef my_free
#define my_free free
#endif

List* list_init(unsigned int capacity) {
    List* list = my_alloc(sizeof(List));
    list->values = my_alloc(capacity * sizeof(int));
    list->size = 0;
    list->capacity = capacity;
    return list;
}

void expand_capacity(List* list) {
    if(list->size/2 < list->capacity) {
        return;
    }
    list->capacity *= 2;
    int* newArr = my_alloc(list->capacity * sizeof(int));
    for(unsigned int i = 0; i < list->size; i++) {
        newArr[i] = list->values[i];
    }
    my_free(list->values);
    list->values = newArr;
}

void list_add(List* list, int element) {
    expand_capacity(list);
    list->values[list->size] = element;
    list->size++;
}

int list_get_i(List* list, unsigned int idx) {
    if((unsigned int)idx >= list->size) printf("Index out of bounds for get, junk value returned\n");
    return list->values[idx];
}

int list_get_e(List* list, int element) {
    for(unsigned int i = 0; i < list->size; i++) {
        if(list->values[i] == element) {
            return list->values[i];
        }
    }
    printf("Element not in list, junk value returned\n");
    return -1;
}

void list_remove_i(List* list, unsigned int index) {
    if(index >= list->size) return;
    int* newArr = my_alloc(list->capacity * sizeof(int));

    for(unsigned int i = 0; i < index; i++) {
        newArr[i] = list->values[i]; 
    }

    for(unsigned int i = index; i < list->size - 1; i++) {
        newArr[i] = list->values[i+1];
    }

    free(list->values);
    list->values = newArr;
    list->size--;
}

void list_remove_e(List* list, int element) {
    for(unsigned int i = 0; i < list->size; i++) {
        if(list->values[i] == element) {
            list_remove_i(list, i);
            return;
        }
    }
    return;
}

void list_insert(List* list, int element, unsigned int idx) {
    if(idx > list->size) {
        printf("Index out of bounds for list insert\n");
        return;
    }
    expand_capacity(list);
    int* newArr = calloc(list->capacity, sizeof(int));
    for(unsigned int i = 0; i < idx; i++) {
        newArr[i] = list->values[i];
    }
    newArr[idx] = element;
    for(unsigned int i = idx; i < list->size; i++) {
        newArr[i+1] = list->values[i];
    }

    free(list->values);
    list->values = newArr;
    list->size++;
}

void list_set(List* list, int element, unsigned int idx) {
    if(idx > list->size) {
        printf("Index out of bounds for list set\n");
        return;
    }
    list->values[idx] = element;
}

void list_print(List* list) {
    printf("List conents: ");
    for(unsigned int i = 0; i < list->size; i++) {
        printf("%d ", list->values[i]);
    }
    printf("\n");
}

void free_list(List* list) {
    free(list->values);
    free(list);
    list = NULL;
}
