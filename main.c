
// In the name of God

#include <stdio.h>
#include "linked_stack.h"
#include "linked_queue_list.h" // included "linked_list.h"
#include "linked_queue.h"
#include "list_based_array.h"
#include "stack.h"
#include "queue.h"

void TEST_LINKED_STACK();
void TEST_LINKED_LIST();
void TEST_QUEUE_BASED_LINKED_LIST();
void TEST_LINKED_QUEUE();
void TEST_LIST_ARRAY_BASED();
void TEST_STACK_ARRAY();
void TEST_QUEUE_ARRAY();

int main() {

//     TEST_LINKED_STACK();
//     TEST_LINKED_LIST();
//     TEST_QUEUE_BASED_LINKED_LIST();
//     TEST_LINKED_QUEUE();
//     TEST_LIST_ARRAY_BASED();
//     TEST_STACK_ARRAY();
//    TEST_QUEUE_ARRAY();

   return 0;
}

void TEST_QUEUE_ARRAY() {
    Queue3 q;
    Create_q3(&q);
    printf("size: %d\n", size_q3(&q));
    Enqueue_q3(&q, 'A');
    printf("size: %d\n", size_q3(&q));
    Enqueue_q3(&q, 'B');
    printf("size: %d\n", size_q3(&q));
    Enqueue_q3(&q, 'c');
    printf("size: %d\n", size_q3(&q));
    Enqueue_q3(&q, 'D');
    printf("size: %d\n", size_q3(&q));
    Enqueue_q3(&q, 'E');
    printf("size: %d\n", size_q3(&q));
    printf("%c\n", Dequeue_q3(&q));
    printf("%c\n", Dequeue_q3(&q));
    Enqueue_q3(&q, 'F');
    Enqueue_q3(&q, 'G');
    printf("%c\n", Dequeue_q3(&q));
    printf("%c\n", Dequeue_q3(&q));
    printf("%c\n", Dequeue_q3(&q));
    printf("%c\n", Dequeue_q3(&q));
    printf("%c\n", Dequeue_q3(&q));
    printf("size: %d\n", size_q3(&q));

}



void TEST_LINKED_STACK() {
    Stack s;
    Create_s(&s);
    printf("size pre push: %d\n", size_s(&s));
    push_s(&s, 'A');
    push_s(&s, 'B');
    push_s(&s, 'C');
    push_s(&s, 'D');
    printf("size after push: %d\n", size_s(&s));
    printf("%c\n", pop_s(&s));
    printf("%c\n", pop_s(&s));
    printf("%c\n", pop_s(&s));
    printf("%c\n", pop_s(&s));
    printf("size after pop: %d\n", size_s(&s));
}

void TEST_LINKED_LIST() {
    List l;
    Create_l(&l);
    printf("size pre push: %d\n", size_l(&l));
    push_l(&l, 'A', 0); // A
    push_l(&l, 'B', 1); // A B
    push_l(&l, 'C', 2); // A B C
    push_l(&l, 'D', 3); // A B C D
    printf("size after push: %d\n", size_l(&l));
    printf("%c\n", pop_l(&l, 0)); // return A , list becomes: B C D
    printf("size after pop: %d\n", size_l(&l));
    printf("%c\n", pop_l(&l, 2)); // return D, list becomes: B C
    printf("size after pop: %d\n", size_l(&l));
    printf("%c\n", pop_l(&l, 0)); // return B, list becomes: C
    printf("%c\n", pop_l(&l, 0)); // return C, list become Empty
    if(Empty_l(&l)){
        printf("List is Empty\n");
    }
}

void TEST_QUEUE_BASED_LINKED_LIST() {
    Queue q;
    Create_q(&q);
    printf("size pre EnQueue: %d\n", size_q(&q));
    Enqueue(&q, 'A');
    printf("size: %d\n", size_q(&q));
    Enqueue(&q, 'B');
    printf("size: %d\n", size_q(&q));
    Enqueue(&q, 'c');
    printf("size: %d\n", size_q(&q));
    Enqueue(&q, 'D');
    printf("size: %d\n", size_q(&q));
    Enqueue(&q, 'E');
    printf("size: %d\n", size_q(&q));
    printf("%c\n", Dequeue(&q));
    printf("%c\n", Dequeue(&q));
    printf("%c\n", Dequeue(&q));
    printf("%c\n", Dequeue(&q));
    printf("%c\n", Dequeue(&q));
}

void TEST_LINKED_QUEUE() {
    Queue2 q;
    Create_q2(&q);
    printf("size pre EnQueue: %d\n", size_q2(&q));
    Enqueue2(&q, 'A');
    printf("size: %d\n", size_q2(&q));
    Enqueue2(&q, 'B');
    printf("size: %d\n", size_q2(&q));
    Enqueue2(&q, 'c');
    printf("size: %d\n", size_q2(&q));
    Enqueue2(&q, 'D');
    printf("size: %d\n", size_q2(&q));
    Enqueue2(&q, 'E');
    printf("size: %d\n", size_q2(&q));
    printf("%c\n", Dequeue2(&q));
    printf("%c\n", Dequeue2(&q));
    printf("%c\n", Dequeue2(&q));
    printf("%c\n", Dequeue2(&q));
    printf("%c\n", Dequeue2(&q));
}

void TEST_LIST_ARRAY_BASED() {
    List_array l;
    Create_l2(&l);
    printf("size: %d\n", size_l2(&l));
    Insert_l2(&l, 'A', 0); // A
    Insert_l2(&l, 'B', 1); // A B
    Insert_l2(&l, 'C', 2); // A B C
    Insert_l2(&l, 'D', 3); // A B C D
    printf("size after push: %d\n", size_l2(&l));
    printf("%c\n", Retrieve_l2(&l, 0)); // return A , list becomes: B C D
    printf("size after pop: %d\n", size_l2(&l));
    printf("%c\n", Retrieve_l2(&l, 2)); // return D, list becomes: B C
    printf("size after pop: %d\n", size_l2(&l));
    printf("%c\n", Retrieve_l2(&l, 0)); // return B, list becomes: C
    printf("%c\n", Retrieve_l2(&l, 0)); // return C, list become Empty
    if(Empty_l2(&l)){
        printf("List is Empty\n");
    }
}


void TEST_STACK_ARRAY() {
    Stack_2 s;
    Create_s2(&s);
    printf("size: %d\n", size_s2(&s));
    push_s2(&s, 'A');
    push_s2(&s, 'B');
    push_s2(&s, 'C');
    push_s2(&s, 'D');
    printf("size after push: %d\n", size_s2(&s));
    printf("%c\n", pop_s2(&s));
    printf("%c\n", pop_s2(&s));
    printf("%c\n", pop_s2(&s));
    printf("%c\n", pop_s2(&s));
    printf("size after pop: %d\n", size_s2(&s));
}