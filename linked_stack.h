#ifndef LINKED_LIST_LINKED_STACK_H
#define LINKED_LIST_LINKED_STACK_H
#include <stdlib.h>
#include <stdio.h>

typedef char type;

typedef struct node_s {
    type data;
    struct node_s *nextNode;
} Node_s;

typedef struct  {
    Node_s *top;
    int size;
} Stack;
type pop_s(Stack *s);
void Create_s(Stack *s);
void push_s(Stack *s, type value);
int size_s(Stack *s);
int Empty_s(Stack *s);
int Full_s(Stack *s);


#endif //LINKED_LIST_LINKED_STACK_H
