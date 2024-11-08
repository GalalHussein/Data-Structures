#include "linked_queue.h"

void Create_q2(Queue2 *q) {
    q->rear = q->front = NULL;
    q->size = 0;
}

void Enqueue2(Queue2 *q, type value) {
    Node_q *newNode = (Node_q*) malloc(sizeof (Node_q));
     if(newNode == NULL) {
         fprintf(stderr, "Memory allocation failed\n");
         exit(1);
     }
    newNode->nextNode = NULL;
    newNode->data = value;
     if(q->rear == NULL) {
         q->rear = q->front = newNode;
         return;
     }
     else {
         q->rear->nextNode = newNode;
         q->rear = newNode;
     }
     q->size++;
}

type Dequeue2(Queue2 *q) {
    if(q->front == NULL) {
        fprintf(stderr, "Queue is empty!\n");
        exit(1);
    }
      Node_q *temp = q->front;
      q->front = q->front->nextNode;
      type saveData = temp->data;
       if(q->front == NULL) {
           q->rear = NULL;
       }
      free(temp);
      q->size--;

      return saveData;
}

int Full_q2(Queue2 *q) { return 0; }
int Empty_q2(Queue2 *q) { return q->front == NULL; }
int size_q2(Queue2 *q) { return q->size; }