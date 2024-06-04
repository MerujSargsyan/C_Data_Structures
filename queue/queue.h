#include "linked_list.h"

typedef struct {
    Linked_list* llist;
    int size;
} Queue;

Queue* queue_init();
void queue_enque(Queue* q, int element);
int queue_deque(Queue* q);
int queue_peek(Queue* q);
void print_queue(Queue* q);
void free_queue(Queue* q);
