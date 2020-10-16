//
// Created by 최가은 on 2020/09/24.
//

// 데이터타입과 함수 원형이 정의돼

#ifndef DATASTRUCTURE_QUEUE_H
#define DATASTRUCTURE_QUEUE_H

#define MAX_QUEUE_SIZE 10
typedef struct chicken {
    char name[32];
    unsigned int price;
}Chicken;

typedef struct queue {
    Chicken order[MAX_QUEUE_SIZE];
    int front, rear;
}Queue;

void init_queue(Queue *q);
int is_full(Queue *q);
int is_empty(Queue *q);
void enqueue(Queue *q, Chicken item);
unsigned int delivery(Queue *q, int rider);
Chicken dequeue(Queue *q);
Chicken peek(Queue *q);
void print_order(Queue *q);
void print_total(unsigned int num);

#endif //DATASTRUCTURE_QUEUE_H
