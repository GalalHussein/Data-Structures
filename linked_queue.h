#ifndef LINKED_LIST_LINKED_QUEUE_H
#define LINKED_LIST_LINKED_QUEUE_H
#include <stdio.h>
#include <stdlib.h>

typedef char type;
typedef struct node_q{
    type data;
    struct node_q* nextNode;
} Node_q;

typedef struct {
    Node_q *front, *rear;
    int size;
} Queue2;
void Create_q2(Queue2 *q);
void Enqueue2(Queue2 *q, type value);
type Dequeue2(Queue2 *q);
int Full_q2(Queue2 *q);
int Empty_q2(Queue2 *q);
int size_q2(Queue2 *q);


#endif //LINKED_LIST_LINKED_QUEUE_H
