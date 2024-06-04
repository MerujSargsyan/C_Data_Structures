#include "queue.h"
#include <stdio.h>

int main(void) {
    Queue* q = queue_init();
    queue_enque(q, 1);
    queue_enque(q, 2);
    queue_enque(q, 3);
    queue_enque(q, 4);
    printf("peek result: %d\n", queue_peek(q));
    print_queue(q);
    queue_deque(q);
    print_queue(q);
    free_queue(q);
    return 0;
}
