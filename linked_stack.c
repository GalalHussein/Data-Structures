#include "linked_stack.h"

void Create_s(Stack *s) {
    s->top = NULL;
    s->size = 0;
}

void push_s(Stack *s, type value) {
    Node_s *newNode = (Node_s*) malloc(sizeof(Node_s));
    if(newNode == NULL) {
        perror("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
     newNode->nextNode = s->top;
     s->top = newNode;
     s->size++;
}

type pop_s(Stack *s) {
   if(s->size == 0) {
       perror("Stack is Empty!\n");
       exit(1);
   }
    Node_s *temp = s->top;
    s->top = s->top->nextNode;
    type saveData = temp->data;
    s->size--;
    free(temp);
    return saveData;
}

int size_s(Stack *s) { return s->size; }
int Empty_s(Stack *s) { return s->size == 0; }
int Full_s(Stack *s) { return 0; }