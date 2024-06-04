#include "linked_list.h"
#include "queue.h"

Queue* queue_init() {
    Queue* q = malloc(sizeof(Queue));
    q->llist = llist_init();
    q->size = 0;
    return q;
}

void queue_enque(Queue* q, int element) {
    llist_insert(q->llist, 0, element);
    q->size++;
}

int queue_deque(Queue* q) {
    llist_get(q->llist, 0);
    llist_remove(q->llist, 0);
    q->size--;
}

int queue_peek(Queue* q) {
    llist_get(q->llist, 0);
}

void print_queue(Queue* q) {
    printf("top: ");
    print_llist(q->llist);
}

void free_queue(Queue* q) {
    free_llist(q->llist);
    free(q);
}
