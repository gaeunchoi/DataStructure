//
// Created by 최가은 on 2020/10/16.
//

#ifndef TREE_QUEUE_H
#define TREE_QUEUE_H
#include "TreeNode.h"

typedef struct queueNode {
    TreeNode *node;
    struct queueNode *link;
}queueNode;

typedef struct queue{
    queueNode *front, *rear;
    int cnt;
}queue;

void init_queue(queue *q);
int is_empty(queue *q);
void enqueue(queue *q, TreeNode *node);
TreeNode* dequeue(queue *q);

#endif //TREE_QUEUE_H
