#include "linked_list.h"

typedef struct {
    Linked_list* llist;
    int size;
} Queue;

// TODO
Queue* queue_init();
// TODO
void queue_enque(Queue* q, int element);
// TODO
int queue_deque(Queue* q);
// TODO
int queue_peek(Queue* q);
// TODO
void print_queue(Queue* q);
// TODO
void free_queue(Queue* q);
