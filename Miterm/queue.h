//
// Created by 최가은 on 2020/10/25.
//

#ifndef MITERM_QUEUE_H
#define MITERM_QUEUE_H

#include "User.h"

typedef struct queueNode {
    User *u;
    struct queueNode *link;
}queueNode;

typedef struct queue{
    queueNode *front, *rear;
    unsigned int size;
}queue;

void init_queue(queue *q);
int is_empty(queue *q);
void enqueue(queue *q, User *new);
User* dequeue(queue *q);


#endif //MITERM_QUEUE_H
