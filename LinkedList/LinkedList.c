//
// Created by 최가은 on 2020/10/08.
//
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void init(dlist *list){
    list->head = NULL;
    list->size = 0;
}

Node* create_Node(element data){
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    node->prev = NULL;

    return node;
}

void insert(dlist *list, unsigned int pos, element data){
    Node *node = create_Node(data);

    // head == NULL -> 리스트가 아예 없다 만들어진 노드가 없다
    if(list->head == NULL) list->head = node;
    // pos == 0 -> 맨 처음에 삽입
    else if(pos == 0) {
        node->next = list->head;
        list->head->prev = node;
        list-> head = node;
    }
    // 중간 어딘가/마지막에 삽입
    else {
        Node *p = list->head;
        for (int i = 0; i < pos - 1; i++) p = p->next;

        if(p->next == NULL) p->next = node;
        else {
            p->next->prev = node;
            node->next = p->next;
            p->next = node;
            node->prev = p;
        }
    }
    list->size++;
}

void insert_first(dlist *list, element data){
    insert(list, 0, data);
}

void insert_last(dlist *list, element data){
    insert(list, list->size, data);
}

element delete(dlist *list, unsigned int pos){
    Node *p = list->head;
    if(pos == 0){
        list->head = p->next;
        if (p->next != NULL) p->next->prev = NULL;
        list->size--;
        return p->data;

    } else {
        for (int i = 0; i < pos-1; i++) p = p->next;
        p->next->prev = p->prev;
        p->prev->next = p->next;
        list->size--;
        return p->data;
    }
}

element delete_first(dlist *list){
    return delete(list, 0);
}

element delete_last(dlist *list){
    return delete(list, list->size);
}