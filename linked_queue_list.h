#ifndef LINKED_LIST_LINKED_QUEUE_LIST_H
#define LINKED_LIST_LINKED_QUEUE_LIST_H
#include <stdio.h>
#include "linked_list.h"
// Linked Queue Based Linked List

typedef struct {
    List que;
} Queue;

void Create_q(Queue *q);
void Enqueue(Queue *q, type value);
type Dequeue(Queue *q);
int Full_q(Queue *q);
int Empty_q(Queue *q);
int size_q(Queue *q);


#endif //LINKED_LIST_LINKED_QUEUE_LIST_H
