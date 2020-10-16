#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
int main() {
    unsigned int total = 0;
    Queue q;
    init_queue(&q);

    int a = 3;
    int b = 2;
    int c = 5;

    Chicken or1 = {"황금올리브치킨", 18000};
    Chicken or2 = {"뿌링클", 19000};
    Chicken or3 = {"오리엔탈파닭", 17000};
    Chicken or4 = {"레드콤보", 18000};
    Chicken or5 = {"고추바사삭", 19000};
    Chicken or6 = {"매운간장치킨", 16000};
    Chicken or7 = {"맛초킹", 17000};
    Chicken or8 = {"슈프림양념치킨", 18000};
    Chicken or9 = {"스노윙치킨", 18000};
    Chicken or10 = {"핫후라이드치킨", 19000};
    Chicken or11 = {"크리미언치킨", 18000};
    Chicken or12 = {"갈릭반 핫양념반", 19000};
    Chicken or13 = {"허니콤보", 19000};

    enqueue(&q, or1);
    enqueue(&q, or2);
    enqueue(&q, or3);
    enqueue(&q, or4);
    enqueue(&q, or5);
    total += delivery(&q, a);

    enqueue(&q, or6);
    total += delivery(&q, b);

    enqueue(&q, or7);
    total += delivery(&q, a);

    enqueue(&q, or8);
    enqueue(&q, or9);
    enqueue(&q, or10);
    enqueue(&q, or11);
    total += delivery(&q, c);

    enqueue(&q, or12);
    enqueue(&q, or13);

    print_order(&q);
    print_total(total);
}
