// Created by NanoChip on 11/8/2024.

#include "stack.h"

void Create_s2(Stack_2 *s) {
    s->top = 0;
}

void push_s2(Stack_2 *s, type value) {
     if(s->top == MAX) {
         printf("stack is full!\n");
         return;
     }
    s->arr[s->top++] = value;
}

type pop_s2(Stack_2 *s) {
    if(s->top == 0) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->arr[--s->top];
}

int Full_s2(Stack_2 *s) { return s->top == MAX-1; }
int Empty_s2(Stack_2 *s) { return s->top == 0; }
int size_s2(Stack_2 *s) { return s->top; }
