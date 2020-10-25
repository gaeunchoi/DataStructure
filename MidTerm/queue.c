//
// Created by 최가은 on 2020/10/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"

void init_queue(queue *q){
    q->front = NULL;
    q->rear = NULL;
    q->size = 0;
}

int is_empty(queue *q){
    return q->front == NULL;
}

void enqueue(queue *q, User *new){
    queueNode *tmp = (queueNode*)malloc(sizeof(queueNode));
    tmp->u = new;
    tmp->link = NULL;

    if(is_empty(q)){
        q->front = q->rear = tmp;
    } else {
        q->rear->link = tmp;
        q->rear = tmp;
    }

    q->size++;
}

User* dequeue(queue *q){
    queueNode *get = q->front;
    if(is_empty(q)){
        return NULL;
    } else {
        User* tmp = get->u;
        q->front = q->front->link;

        if(q->front == NULL){
            q->rear = NULL;
        }
        free(get);
        q->size--;
        return tmp;
    }
}
