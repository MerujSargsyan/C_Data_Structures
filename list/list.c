#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void extend_capacity(List* list) {
    if(list->size <=  list->capacity/2) return;
    list->capacity *= 2;
    int* newArr = calloc(list->capacity, sizeof(int));
    for(unsigned int i = 0; i < list->size; i++) {
        newArr[i] = list->array[i];
    }
    free(list->array);
    list->array = newArr;
}

List* list_init(unsigned int capacity) {
    List* list = malloc(sizeof(List));
    list->array = calloc(capacity, sizeof(int));
    list->size = 0;
    list->capacity = capacity;
    return list;
}

void list_add(List* list, int element) {
    extend_capacity(list);
    list->array[list->size] = element;
    list->size++;
}

int list_get(List* list, unsigned int idx) {
    if((unsigned int)idx >= list->size) printf("Index out of bounds for get, junk value returned\n");
    return list->array[idx];
}

void list_remove_index(List* list, unsigned int index) {
    int* newArr = calloc(list->capacity, sizeof(int));
    if(index >= list->size) return;
    for(unsigned int i = 0; i < index; i++) {
        newArr[i] = list->array[i]; 
    }

    for(unsigned int i = index; i < list->size - 1; i++) {
        newArr[i] = list->array[i+1];
    }

    free(list->array);
    list->array = newArr;
    list->size--;
}

void list_remove_element(List* list, int element) {
    for(unsigned int i = 0; i < list->size; i++) {
        if(list->array[i] == element) {
            list_remove_index(list, i);
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
    extend_capacity(list);
    int* newArr = calloc(list->capacity, sizeof(int));
    for(unsigned int i = 0; i < idx; i++) {
        newArr[i] = list->array[i];
    }
    newArr[idx] = element;
    for(unsigned int i = idx; i < list->size; i++) {
        newArr[i+1] = list->array[i];
    }

    free(list->array);
    list->array = newArr;
    list->size++;
}

void list_set(List* list, int element, unsigned int idx) {
    if(idx > list->size) {
        printf("Index out of bounds for list set\n");
        return;
    }
    list->array[idx] = element;
}

void list_print(List* list) {
    printf("List conents: ");
    for(unsigned int i = 0; i < list->size; i++) {
        printf("%d ", list->array[i]);
    }
    printf("\n");
}

void free_list(List* list) {
    free(list->array);
    free(list);
    list = NULL;
}








