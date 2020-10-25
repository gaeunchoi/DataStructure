//
// Created by 최가은 on 2020/10/25.
//
#include <stdio.h>
#include <string.h>
#include "mainQueue.h"

void init_mq(mainQueue *mq){
    for(int i = 0 ; i < 6 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            init_queue(&mq[i].line[j]);
        }
    }
}

void mq_enqueue(mainQueue *mq, User *u){
    char *tiers[] = {"돌", "동", "은", "금", "우라늄", "비브라늄"};
    char *lines[] = {"상단", "중단", "하단", "옆구리"};

    char* tier = u->tier;
    char* line = u->line;

    for(int i = 0 ; i < 6 ; i++){
        if(strcmp(tier, tiers[i]) == 0) {
            for(int j = 0 ; j < 4 ; j++){
                if(strcmp(line, lines[j]) == 0) {
                    enqueue(&mq[i].line[j], u);
                    matching_game(&mq[i]);
                }
            }
        }
    }
}

void matching_game(mainQueue *mq){
    int is_over2 = 1;
    for(int i = 0 ; i < 4 ; i++){
        if(mq->line[i].size < 2){
            is_over2 = 0;
        }
    }

    if(is_over2 == 1) {
        for(int i  = 0 ; i < 4 ; i++){
            User *tmp = dequeue(&mq->line[i]);
            printf("[%s, %s]\t\t", tmp->nick, tmp->line);
            tmp = dequeue(&mq->line[i]);
            printf("[%s, %s]\t\t", tmp->nick, tmp->line);
            printf("\n");
        }
        printf("\n");
    }
}

void print_mq(mainQueue *mq){
    for(int i = 0 ; i < 6 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            for(queueNode *p = mq[i].line[j].front; p != NULL ; p = p->link) {
                printf("[%s, %s, %s] ", p->u->nick, p->u->tier, p->u->line);
            }
        }
        printf("\n");
    }
}