//
// Created by 최가은 on 2020/10/16.
//
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void init_queue(queue *q){
    q->front = NULL;
    q->rear = NULL;
    q->cnt = 0;
}
int is_empty(queue *q){
    return q->front == NULL;
}

void enqueue(queue *q, TreeNode *node){
    queueNode *tmp = (queueNode*)malloc(sizeof(queueNode));
    tmp->node = node;
    tmp->link = NULL;

    if(is_empty(q)){
        q->front = q->rear = tmp;
    } else {
        q->rear->link = tmp;
        q->rear = tmp;
    }
}

TreeNode* dequeue(queue *q){
    queueNode *get = q->front;
    if(is_empty(q)){
        printf("큐가 비었어용");
    } else {
        TreeNode* tmp = get->node;
        q->front = q->front->link;

        if(q->front == NULL){
            q->rear = NULL;
        }

        free(get);
        return tmp;
    }
}
