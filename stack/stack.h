#include "linked_list.h"

typedef struct {
    Linked_list* llist;
    int size;
} Stack;

Stack* stack_init();
void stack_push(Stack* stack, int element);
int stack_pop(Stack* stack);
int stack_peek(Stack* stack);
void print_stack(Stack* stack);
void free_stack(Stack* stack);
