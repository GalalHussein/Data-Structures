// Created by NanoChip on 11/11/2024.
// Double sorted linked list

#include "double_linked_list.h"

void Create_map(map *m) {
     m->head = 0; m->size = 0;
}

void Insert_m(map *m, type value, int k) {
    Node_m *newNode = (Node_m*) malloc(sizeof (Node_m));
     if(newNode == NULL) {
         fprintf(stderr, "Fail allocate memory\n");
         return ;
     }
    newNode->info.data = value;
    newNode->info.key = k;
    iterator_m it = m->head;
    // Case if it first insertion
    if(m->head == NULL) {
        newNode->nextNode = newNode->preNode = NULL;
        m->head = newNode;
    } else {
         while(k > it->info.key && it->nextNode != NULL) {
             it = it->nextNode;
         }
          // Case if newNode will be last node
             if(k > it->info.key && it->nextNode == NULL) {
                 newNode->nextNode = NULL;
                 newNode->preNode = it;
                 it->nextNode = newNode;
                 m->size++;
                  return ;
             }

         newNode->nextNode = it;
         newNode->preNode = it->preNode;
          if(it->preNode != NULL) {
             it->preNode->nextNode = newNode;
          }
          else {
              m->head = newNode;
          }
          it->preNode = newNode;
    }  m->size++;
}

type Retrieve_map(map *m, int k) {
     if(m->size == 0) {
         fprintf(stderr, "Map is Empty\n");
         exit(1);
     }
     type saveData = -1;
      iterator_m it = m->head;
       while(it != NULL) {
           if(it->info.key == k && it == m->head) {
               saveData = it->info.data;
               m->head = it->nextNode;
               free(it);
               m->size--;
               return saveData;
           }
           if(it->info.key == k) {
               saveData = it->info.data;
                it->preNode->nextNode = it->nextNode;
                it->nextNode->preNode = it->preNode;
               free(it);
               m->size--;
               return saveData;
           }
           it = it->nextNode;
       }
    return -1;
}

void print_map(map *m) {
    iterator_m it = m->head;
     while(it != NULL) {
         printf("{key: %d} {value: %c}\n", it->info.key, it->info.data);
         it = it->nextNode;
     }
}


int Empty_map(map *m) { return m->size == 0; }
int Full_map(map *m) { return 0; }
int size_map(map *m) { return m->size;}
