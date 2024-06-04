#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

Stack* stack_init() {
    Stack* stack = malloc(sizeof(Stack));
    stack->llist = llist_init();
    stack->size = 0;
    return stack;
}

void stack_push(Stack* stack, int element) {
    llist_insert(stack->llist, 0, element);
    stack->size++;
}

int stack_peek(Stack* stack) {
    return llist_get(stack->llist, 0);
}

int stack_pop(Stack* stack) {
    int output = stack_peek(stack);
    llist_remove_index(stack->llist, 0);
    stack->size--;
    return output;
}

void print_stack(Stack* stack) {
    llist_print(stack->llist);
}

void free_stack(Stack* stack) {
    free_llist(stack->llist);
    free(stack);
}
