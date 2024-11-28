#ifndef LIST_DOUBLE_LIST_H
#define LIST_DOUBLE_LIST_H
#include <stdlib.h>
#include <stdio.h>

typedef char type;
typedef struct node{
     type data;
     struct node *nextNode, *preNode;
} Node;
typedef Node *iterator;
typedef struct {
    int length;
    Node *front, *back;
} list;
void create(list *l);
int Insert(list *l, type value, int pos);
type Retrieve(list *l, type pos);
int Size(list *l);
#endif
