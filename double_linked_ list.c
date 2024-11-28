#include "Double list.h"

void create(list *l) {
    l->front = l->back = NULL;
    l->length = 0;
}

int Insert(list *l, type value, int pos) {
     if(pos < 0 || pos > l->length) { // position must be between (0, size)
        return fprintf(stderr, "Invalid pos\n");
     }
     Node *newNode = (Node*) malloc(sizeof(Node)); // Create new node
     newNode->data = value;
     newNode->nextNode = newNode->preNode = NULL; // initialise newNode
     if(l->length == 0) { // if it's first insertion
         l->front = l->back = newNode;
         newNode->nextNode = newNode->preNode = NULL;
     }  else if(pos == 0) {
          newNode->nextNode = l->front;
          l->front = newNode;
          newNode->nextNode->preNode = newNode;
     }
     else if(pos == l->length) {
         newNode->preNode = l->back;
         l->back = newNode;
         newNode->preNode->nextNode = newNode;
     } else {
         iterator left_it = l->front, right_it = l->back; // def two pointers to traverse from front and back
         if(pos > l->length/2) { // Move from right to left
             for(int i=0; i<(l->length-pos) -1; i++) {
                 right_it = right_it->preNode;
             }
             newNode->nextNode = right_it->nextNode;
             newNode->preNode = right_it;
             right_it->nextNode = newNode;
             if(newNode->nextNode != NULL)
              newNode->nextNode->preNode = newNode;

         } else { // Move from left to right
            for(int i=0; i<pos-1; i++) {
                left_it = left_it->nextNode;
            }
            newNode->nextNode = left_it->nextNode;
            newNode->preNode = left_it;
            newNode->nextNode->preNode = newNode;
            left_it->nextNode = newNode;
         }
     }
     l->length++;
     return 1;
}

type Retrieve(list *l, type pos) {
     if(l->length == 0) {
        return printf("list is Empty\n");
     }
     iterator temp = NULL;
     type saveData = -1;
     iterator left_it = l->front, right_it = l->back; // def two pointers to traverse from front and back
     if(l->length == 1) {
         temp = l->front;
         l->front = l->back = NULL;

     } else if(pos == 0) { // first node
        temp = l->front;
        l->front = l->front->nextNode;
        l->front->preNode = NULL;

    } else if(pos == l->length-1) { // last node
        temp = l->back;
        l->back = l->back->preNode;
        l->back->nextNode = NULL;

    } else if(pos > l->length/2) {
        for(int i=0; i<(l->length-pos)-1 ; i++) {
            right_it = right_it->preNode;
        }
        temp = right_it;
        right_it->preNode->nextNode = right_it->nextNode;
        right_it->nextNode->preNode = right_it->preNode;
    } else {
        for(int i=0; i<pos; i++) {
            left_it = left_it->nextNode;
        }
        temp = left_it;
        left_it->preNode->nextNode = left_it->nextNode;
        left_it->nextNode->preNode = left_it->preNode;
    }
    saveData = temp->data;
    free(temp);
    l->length--;
    return saveData;
}

int Size(list *l) {
    return l->length;
}
