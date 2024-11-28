// Created by NanoChip on 11/11/2024.

#ifndef LINKED_LIST_DOUBLE_LINKED_LIST_H
#define LINKED_LIST_DOUBLE_LINKED_LIST_H
#include <stdlib.h>
#include <stdio.h>
// Double Sorted Linked List

typedef char type;
typedef struct {
   int key;
   type data;
} DATA;

typedef struct node_m {
    DATA info;
    struct node_m *nextNode, *preNode;
} Node_m;

typedef struct {
    Node_m * head;
    int size;
} map;

typedef Node_m * iterator_m;
void Create_map(map *m);
void Insert_m(map *m, type value, int k);
type Retrieve_map(map *m, int k);
void print_map(map *m);
int Empty_map(map *m);
int Full_map(map *m);
int size_map(map *m);



#endif //LINKED_LIST_DOUBLE_LINKED_LIST_H
