#include <stdio.h>
#include <stdlib.h>

typedef char type;
typedef struct node {
    type data;
    struct node *nextNode;
} Node_l;

typedef struct {
    int size;
    Node_l *head;
} List;

typedef Node_l *iterator;

void Create_l(List *l);
void push_l(List *l, type value, int pos);
type pop_l(List *l, int pos);
int size_l(List *l);
int Empty_l(List *l);
int Full_l (List *l);



