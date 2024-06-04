#include "stack.h"
#include <stdio.h>

int main(void) {
    Stack* stack = stack_init();
    stack_push(stack, 1);
    stack_push(stack, 2);
    stack_push(stack, 3);
    printf("output: %d\n", stack_peek(stack));
    stack_pop(stack);
    print_stack(stack);
    free_stack(stack);
    return 0;
}
