#include "linked_queue_list.h"
/***** Linked Queue Based On Linked List *******/

void Create_q(Queue *q) {
    Create_l((List *) q);
}

void Enqueue(Queue *q, type value) {
    push_l((List *)q, value, 0);
}

type Dequeue(Queue *q) {
    return pop_l((List *)q, size_l((List *)q)-1);
}
int Full_q(Queue *q) { return Full_l((List *)q); }
int Empty_q(Queue *q) { return Empty_l((List *)q); }
int size_q(Queue *q) { return size_l((List *)q);}