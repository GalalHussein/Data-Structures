/***** Created by NanoChip on 11/8/2024. */

#ifndef LINKED_LIST_STACK_H
#define LINKED_LIST_STACK_H
#include <stdio.h>
#define MAX 10
typedef char type;
typedef struct {
   int top;
   type arr[MAX];
} Stack_2;

void Create_s2(Stack_2 *s);
void push_s2(Stack_2 *s, type value);
type pop_s2(Stack_2 *s);
int Full_s2(Stack_2 *s);
int Empty_s2(Stack_2 *s);
int size_s2(Stack_2 *s);


#endif //LINKED_LIST_STACK_H
