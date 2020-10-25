//
// Created by 최가은 on 2020/10/25.
//

#ifndef MITERM_MAINQUEUE_H
#define MITERM_MAINQUEUE_H
#include "User.h"
#include "queue.h"

typedef struct mainQueue {
    // 0 : 상단
    // 1 : 중단
    // 2 : 하단
    // 3 : 옆구리
    queue line[4];
}mainQueue;

void init_mq(mainQueue *mq);
void mq_enqueue(mainQueue *mq, User *u);
void matching_game(mainQueue *mq);
void print_mq(mainQueue *mq);
#endif //MITERM_MAINQUEUE_H
