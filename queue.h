// Created by NanoChip on 11/8/2024.

#ifndef LINKED_LIST_QUEUE_H
#define LINKED_LIST_QUEUE_H
#include <stdio.h>
#define MAX 10

typedef char type;
typedef struct {
    int front, rear, size;
    type arr[MAX];
} Queue3;

void Create_q3(Queue3 *q);
void Enqueue_q3(Queue3 *q, type value);
type Dequeue_q3(Queue3 *q);
int Full_q3(Queue3 *q);
int Empty_q3(Queue3 *q);
int size_q3(Queue3 *q);




#endif //LINKED_LIST_QUEUE_H
