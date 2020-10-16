//
// Created by 최가은 on 2020/10/09.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dlinkedlist.h"

Node* create_Node(element item){
    // Node 만드는 함수 따로 만들어놨음
    // item 안에는 바벨 무게인 weight와
    // 출력할때 사용할 원판/바를 저장할 name이 있음
    // prev, next 모두 NULL로 초기화
    Node *new = (Node*)malloc(sizeof(Node));
    new->data.weight = item.weight;
    strcpy(new->data.name, item.name);
    new->prev = NULL;
    new->next = NULL;
    return new;
}

void init_dlist(dlist *list){
    // 초기화할때 헤드가 노드(바)를 가르키게 해놓는다.
    // 이 노드는 무게가 20, 이름은 "바"로 되어있다.
    element item = {20, "바"};
    Node *new = create_Node(item);
    list->head = new;
    list->size++;
}

void insert_left(dlist *list, element item) {
    // 바 왼쪽에 끼우는 경우
    // insert_first와 동일하게 돌아감
    Node *new = create_Node(item);
    Node *p = list->head;
    p->prev = new;
    new->next = p;
    list->head = new;
    list->size++;
}

void insert_right(dlist *list, element item) {
    // 바 오른쪽에 끼우는 경우
    // insert_last와 동일하게 돌아감
    Node *new = create_Node(item);
    Node *p = list->head;
    while(p->next != NULL) p = p->next;
    p->next = new;
    new->prev = p;
    list->size++;
}

void print_list(dlist *list){
    for(Node *p = list->head ; p != NULL ; p = p->next){
        printf("%s(%d) ", p->data.name, p->data.weight);
    }
}
