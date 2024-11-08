
#include "linked_list.h"

void Create_l(List *l) {
    l->size = 0;
    l->head = NULL;
}

void push_l(List *l, type value, int pos) {
    if(pos < 0 || pos > l->size) {
        fprintf(stderr, "Invalid push pos!\n");
        exit(0);
    }
    Node_l *newNode = (Node_l*) malloc(sizeof (Node_l));
     if(newNode == NULL) {
         fprintf(stderr, "Memory allocation failed!\n");
         exit(1);
     }
    newNode->data = value;
    if(pos == 0) {
        newNode->nextNode = l->head;
        l->head = newNode;
    }
    else {
        iterator it = l->head;
        for(int i=0; i<pos-1; i++) {
            it = it->nextNode;
        }
         newNode->nextNode = it->nextNode;
         it->nextNode = newNode;
    }
    l->size++;
}

type pop_l(List *l, int pos) {
    if(pos < 0 || pos > l->size-1) {
        fprintf(stderr, "invalid pop pos!\n");
        exit(1);
    }
    type saveData;
    if(pos == 0) {
        iterator temp = l->head;
        l->head = l->head->nextNode;
         saveData = temp->data;
        free(temp);
    }
    else {
        iterator it = l->head;
        for(int i=0; i<pos-1; i++) {
            it = it->nextNode;
        }
        iterator temp = it->nextNode;
        it->nextNode = temp->nextNode;
        saveData = temp->data;
        free(temp);
    }
    l->size--;
    return saveData;
}

int size_l(List *l) { return l->size; }
int Empty_l(List *l) { return l->size == 0; }
int Full_l (List *l) { return 0; }


