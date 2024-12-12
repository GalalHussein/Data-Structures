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

Node* FindMin(Node **root) {
    while((*root)->__left != NULL) *root = (*root)->__left;
    return *root;
}

void Delete(Node **curr, typeEntry data) {
     if(*curr == NULL) return ;
     else if(data < (**curr).__data) Delete(&(*curr)->__left, data);
     else if(data > (**curr).__data) Delete(&(*curr)->__right, data);
     else {
        // Case one:
         if((*curr)->__left == NULL && (*curr)->__right == NULL) {
             free((*curr));
             *curr = NULL;
         }
         // Case two:
         else if((*curr)->__left == NULL) {
             Node *temp = (*curr);
             (*curr) = (*curr)->__right;
             free(temp);
         } else if((*curr)->__right == NULL){
             Node *temp = (*curr);
             (*curr) = (*curr)->__left;
             free(temp);
         }
         // Case three:
         else {
            Node *temp = FindMin(&(*curr)->__right);
             (*curr)->__data = temp->__data;
              Delete(&(*curr)->__right,temp->__data);
          }
      }
}





/*
 struct Node* Delete(struct Node *root, int data) {
	if(root == NULL) return root;
	else if(data < root->data) root->left = Delete(root->left,data);
	else if (data > root->data) root->right = Delete(root->right,data);
	// Wohoo... I found you, Get ready to be deleted
	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) {
			delete root;
			root = NULL;
		}
		//Case 2: One child
		else if(root->left == NULL) {
			struct Node *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			struct Node *temp = root;
			root = root->left;
			delete temp;
		}
		// case 3: 2 children
		else {
			struct Node *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}
 */