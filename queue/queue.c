#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

Queue* queue_init() {
    Queue* q = malloc(sizeof(Queue));
    q->llist = llist_init();
    q->size = 0;
    return q;
}

void queue_enque(Queue* q, int element) {
    llist_add(q->llist, element);
    q->size++;
}

int queue_peek(Queue* q) {
    return llist_get(q->llist, 0);
}

int queue_deque(Queue* q) {
    int output = queue_peek(q);
    llist_remove_index(q->llist, 0);
    q->size--;
    return output;
}

void print_queue(Queue* q) {
    llist_print(q->llist);
}

void free_queue(Queue* q) {
    free_llist(q->llist);
    free(q);
}
