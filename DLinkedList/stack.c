//
// Created by 최가은 on 2020/10/13.
//
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void init_stack(LinkedStackType *s){
    s->top = NULL;
}

int is_empty(LinkedStackType *s){
    return s->top == NULL;
}

void push(LinkedStackType *s, int item){
    StackNode *node = (StackNode*)malloc(sizeof(StackNode));
    node->weight = item;
    node->link = s->top;
    s->top = node;
}

int pop(LinkedStackType *s){
    if(is_empty(s)){
        fprintf(stderr, "스택 공백 에러");
        exit(1);
    }
    else {
        StackNode* tmp = s->top;
        int data = tmp -> weight;
        s->top = tmp->link;
        free(tmp);
        return data;
    }
}