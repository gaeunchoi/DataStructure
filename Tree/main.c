#include <stdio.h>
#include "Tree.h"

int main() {
    Tree t;
    init(&t);

    insert(&t, 20);
    insert(&t, 10);
    insert(&t, 40);
    insert(&t, 5);
    insert(&t, 17);
    insert(&t, 30);
    insert(&t, 55);
    insert(&t, 3);
    insert(&t, 4);
    insert(&t, 13);
    insert(&t, 19);
    insert(&t, 25);
    insert(&t, 35);
    insert(&t, 50);
    insert(&t, 60);

    preorder(t.root);
    printf("\n");

    delete(&t, 10);
    preorder(t.root);
    printf("\n");

    delete(&t, 40);
    preorder(t.root);
    printf("\n");

    delete(&t, 55);
    preorder(t.root);
    printf("\n");

    delete(&t, 4);
    preorder(t.root);
    printf("\n");

    delete(&t, 5);
    preorder(t.root);
    printf("\n");

    search(&t, 11);
    search(&t, 60);

    levelorder(t.root);
}
