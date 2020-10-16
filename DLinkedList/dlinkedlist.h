//
// Created by 최가은 on 2020/10/09.
//

#ifndef DLINKEDLIST_DLINKEDLIST_H
#define DLINKEDLIST_DLINKEDLIST_H

typedef struct barbell{
    int weight;
    char name[10];
}element;

typedef struct Node {
    struct Node *prev;
    element data;
    struct Node *next;
}Node;

typedef struct dlist{
    Node *head;
    unsigned int size;
}dlist;

Node* create_Node(element item);
void init_dlist(dlist *list);
void insert_left(dlist *list, element item);
void insert_right(dlist *list, element item);
void print_list(dlist *list);

#endif //DLINKEDLIST_DLINKEDLIST_H
