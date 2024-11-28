#include <stdio.h>
#include <stdlib.h>
#include "Double list.h"

void TEST_1();
void TEST_2();
void TEST_3();
void TEST_4();

int main() {
//   TEST_1();
//   TEST_2();
//   TEST_3();
   TEST_4();

    return 0;
}

void TEST_1() {
    list l;
    create(&l);
    Insert(&l, 'A', 0);
    Insert(&l, 'B', 1);
    Insert(&l, 'C', 2);
    Insert(&l, 'D', 3);
    Insert(&l, 'E', 4);
    Insert(&l, 'F', 5);
    Insert(&l, 'G', 6);
    Insert(&l, 'H', 7);
    Insert(&l, 'I', 8);
    Insert(&l, 'J', 9);

    int i= Size(&l);
    while (i--)
        printf("%c\n", Retrieve(&l, 0));
}

void TEST_2() {
    list l;
    create(&l);
    Insert(&l, 'A', 0);
    Insert(&l, 'B', 0);
    Insert(&l, 'C', 0);
    Insert(&l, 'D', 1);
    Insert(&l, 'E', 1);
    Insert(&l, 'F', 0);
    Insert(&l, 'J', 1);

    int i= Size(&l);
    while (i--)
        printf("%c\n", Retrieve(&l, 0));
}
void TEST_3() {
    list l;
    create(&l);
    Insert(&l, 'A', 0);
    Insert(&l, 'B', 1);
    Insert(&l, 'C', 2);
    Insert(&l, 'D', 3);
    Insert(&l, 'E', 4);
    Insert(&l, 'F', 5);
    Insert(&l, 'J', 6);

    printf("%c\n", Retrieve(&l, 6));
    printf("%c\n", Retrieve(&l, 5));
    printf("%c\n", Retrieve(&l, 4));
    printf("%c\n", Retrieve(&l, 3));
    printf("%c\n", Retrieve(&l, 2));
    printf("%c\n", Retrieve(&l, 1));
    printf("%c\n", Retrieve(&l, 0));
}

void TEST_4() {
    list l;
    create(&l);
    Insert(&l, 'A', 0);
    Insert(&l, 'B', 2);
    Insert(&l, 'B', -1);

}