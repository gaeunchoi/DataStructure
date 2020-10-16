//
// Created by 최가은 on 2020/09/24.
//

#include <stdio.h>
#include <string.h>
#include "queue.h"

void init_queue(Queue *q) {
    q->front = q->rear = 0;
}

int is_empty(Queue *q) {
    return q->front == q->rear;
}

int is_full(Queue *q) {
    return q->rear == (q->rear + 1) % MAX_QUEUE_SIZE ;
}

// 원형큐 사용
void enqueue(Queue *q, Chicken item) {
    if(is_full(q)) return;
    q->rear = (q->rear+1) % MAX_QUEUE_SIZE;
    q->order[q->rear] = item;
}

// 배달원 a, b, c 에 따라서 dequeue 횟수 달라짐
// dequeue해서 price만 누적해서 return
unsigned int delivery(Queue *q, int rider){
    unsigned int result = 0;
    for(int i = 0 ; i < rider ; i++){
        result += dequeue(q).price;
    }
    return result;
}

Chicken dequeue(Queue *q) {
    Chicken tmp = {"", 0};
    if(is_empty(q)) return tmp;
    q->front = (q->front+1) % MAX_QUEUE_SIZE;
    return q->order[q->front];
}

void print_order(Queue *q){
    if(!is_empty(q)){
        int i = q->front;
        do{
            i = (i+1) % MAX_QUEUE_SIZE;
            printf("(%s %u) ", q->order[i].name, q->order[i].price);
            if(i==q->rear) break;
        } while(i!=q->front);
    }
    printf("\n");
}

void print_total(unsigned int num){
    char *p;
    char buf[80];

    sprintf(buf, "%d", num);

    p = buf;

    int length= strlen(buf);

    for(int i=length; i>0 ;)
    {
        printf("%c",*p++);
        i--;
        if(i>0 && (i%3)==0)
            printf(",");
    }
    printf("\n");
}
