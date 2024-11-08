#ifndef LINKED_LIST_LIST_BASED_ARRAY_H
#define LINKED_LIST_LIST_BASED_ARRAY_H
#include <stdlib.h>
#include <stdio.h>
#define MAX 15
typedef char type;

typedef struct {
    int size;
    type arr[MAX];
} List_array;
void Create_l2(List_array *l);
void Insert_l2(List_array *l, type value, int index);
type Retrieve_l2(List_array *l, int index);
int size_l2(List_array *l);
int Full_l2(List_array *l);
int Empty_l2(List_array *l);


#endif //LINKED_LIST_LIST_BASED_ARRAY_H
