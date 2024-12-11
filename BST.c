//In the name of God
#include "../BST.h"

void Create(Node **root) {
    *root = NULL;
}

Node* CreateNode(typeEntry data) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    if(newNode == NULL) {
        exit(fprintf(stderr,"Faild memory allocat!\n"));
    }
    newNode->__data = data;
    newNode->__right = newNode->__left = NULL;
    return newNode;
}

void Insert(Node **currentNode, typeEntry _data) {
    if(*currentNode == NULL) {
        (*currentNode) = CreateNode(_data);
        return;
    }
    if(_data >= (*currentNode)->__data) { // Original Expression is (**currentNode).data
        Insert(&(*currentNode)->__right, _data); // Here i passed Address of pointer_to_Node
    } else {
        Insert(&(*currentNode)->__left, _data);
    }
}

int MaxElement(Node **currentNode) {
    if(currentNode == NULL) {
        return fprintf(stderr, "Tree Empty!\n");
    } else if((*currentNode)->__right == NULL) { // last right node is the maximum
        return (*currentNode)->__data;
    } else {
        return (MaxElement(&(*currentNode)->__right));
    }
}

int MinElement(Node **currentNode) {
    if(currentNode == NULL) {
        return fprintf(stderr, "Tree Empty!\n");
    } else if((*currentNode)->__left == NULL) { // last right node is the maximum
        return (*currentNode)->__data;
    } else {
        return (MinElement(&(*currentNode)->__left));
    }
}



int Height(Node **currentNode) {
    if(*currentNode == NULL) return -1;
    return  Height(&(*currentNode)->__right) >
            Height(&(*currentNode)->__left) ?
            Height(&(*currentNode)->__right) +1:
            Height(&(*currentNode)->__left)  +1;
}


void PreOrder(Node **current) {
    if(*current == NULL) return;
    printf("%d\n", (*current)->__data);
    PreOrder(&(*current)->__left);
    PreOrder(&(*current)->__right);
}

void  PostOrder(Node **current) {
    if(*current == NULL) return ;
    printf("%d\n", (*current)->__data);
    PostOrder(&(*current)->__right);
    PostOrder(&(*current)->__left);
}

void InOrder(Node **current) {
    if (*current == NULL) return;
    InOrder(&(*current)->__left);
    printf("%d\n", (*current)->__data);
    InOrder(&(*current)->__right);
}