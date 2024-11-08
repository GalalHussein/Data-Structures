// Created by NanoChip on 11/8/2024.

#include "list_based_array.h"

void Create_l2(List_array *l) {
    l->size = 0;
}

void Insert_l2(List_array *l, type value, int index) {
    if(index < 0 || index > l->size) {
        printf("Invalid Insert position!\n");
        exit(1);
    }
    if(l->size == MAX) {
        printf("List is Full\n");
        exit(1);
    }
    for(int i=l->size; i>index; i--) {
         l->arr[i] = l->arr[i-1];
    }
    l->arr[index] = value;
    l->size++;
}

type Retrieve_l2(List_array *l, int index) {
    if(index < 0 || index >= l->size) {
        printf("Out of bounds!\n");
        exit(1);
    }
    type saveData = l->arr[index];
    for(int i=index; i<l->size-1; i++) {
        l->arr[i] = l->arr[i+1];
    } l->size--;
    return saveData;
}

int size_l2(List_array *l) { return l->size;}
int Full_l2(List_array *l) { return l->size == MAX;}
int Empty_l2(List_array *l) { return l->size == 0; }