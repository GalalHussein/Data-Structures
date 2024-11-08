// Created by NanoChip on 11/8/2024.

#include "queue.h"

void Create_q3(Queue3 *q){
    q->size = q->front = q->rear = 0;
}

void Enqueue_q3(Queue3 *q, type value) {
    if(q->size == MAX) {
        printf("Full Queue!\n");
        return;
    }
    q->arr[(q->rear++)%MAX] = value;
    q->size++;
}

type Dequeue_q3(Queue3 *q) {
    if(q->size == 0) {
        printf("Queue Empty\n");
        return -1;
    }
   q->size--;
    return q->arr[q->front++%MAX];
}

int Full_q3(Queue3 *q) { return q->size == MAX; }
int Empty_q3(Queue3 *q) { return q->size ==0; }
int size_q3(Queue3 *q) { return q->size; }