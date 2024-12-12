#include <stdlib.h>
#include <stdio.h>

typedef int typeEntry;
typedef struct node {
    typeEntry __data;
    struct node *__right, *__left;
} Node; 

typedef Node *Tree;

void Create(Node **root);
//Node* CreateNode(typeEntry data); // ** it's for implementation only
void Insert(Node **currentNode, typeEntry _data);
int MaxElement(Node **currentNode);
int MinElement(Node **currentNode);
int Height(Node **currentNode);
void PreOrder(Node **current);
void PostOrder(Node **current);
void InOrder(Node **current);
void Delete(Node **curr, typeEntry data);

/*
 *  Create() *
 *  CreateNode() *
 *  Insert() *
 *  Traversal() * * *
 *  Height() *
 *  MaxElement() *
 *  MinElement() *
 * */

