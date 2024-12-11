#include <stdio.h>
#include "BST.h"

int main() {
    Tree myTree;
    Create(&myTree);
    Insert(&myTree, 10);
    Insert(&myTree, 12);
    Insert(&myTree, 13);
    Insert(&myTree, 14);
    Insert(&myTree, 15);
    Insert(&myTree, 5);
    Insert(&myTree, 6);
    Insert(&myTree, 3);
    Insert(&myTree, 1);

    printf(" ----- pre-Order Traversal -----\n");
     PreOrder(&myTree);
    printf(" ----- Post-Order Traversal -----\n");
     PostOrder(&myTree);
    printf(" ----- In-Order Traversal -----\n");
    InOrder(&myTree);

    int h = Height(&myTree);
    printf("height of tree: %d\n", h);

    int max = MaxElement(&myTree);
    printf("max element in tree: %d\n", max);

    int min = MinElement(&myTree);
    printf("min element in the tree:%d\n", min);

    return 0;
}

