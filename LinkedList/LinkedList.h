//
// Created by 최가은 on 2020/10/08.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

typedef int element;

typedef struct Node {
    struct Node *prev;
    element data;
    struct Node *next;
}Node;

typedef struct dlist{
    Node *head;
    unsigned int size;
}dlist;

void init(dlist *list);
Node* create_Node(element data);
void insert(dlist *list, unsigned int pos, element data);
void insert_first(dlist *list, element data);
void insert_last(dlist *list, element data);
element delete(dlist *list, unsigned int pos);
element delete_first(dlist *list);
element delete_last(dlist *list);

#endif //LINKEDLIST_LINKEDLIST_H
