//
// Created by 최가은 on 2020/10/13.
//

#ifndef DLINKEDLIST_STACK_H
#define DLINKEDLIST_STACK_H

typedef struct StackNode{
    int weight;
    struct StackNode *link;
}StackNode;

typedef struct {
    StackNode *top;
}LinkedStackType;

void init_stack(LinkedStackType *s);
int is_empty(LinkedStackType *s);
void push(LinkedStackType *s, int item);
int pop(LinkedStackType *s);

#endif //DLINKEDLIST_STACK_H
