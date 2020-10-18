#include <stdio.h>
#include "Tree.h"

int main() {
    Tree t;
    init(&t);

    insert(&t, 20, create_Chicken(10000, "가랑통닭"));
    insert(&t, 10, create_Chicken(11000, "나랑통닭"));
    insert(&t, 40, create_Chicken(12000, "다랑통닭"));
    insert(&t, 5, create_Chicken(13000, "라랑통닭"));
    insert(&t, 17, create_Chicken(14000, "마랑통닭"));
    insert(&t, 30, create_Chicken(15000, "바랑통닭"));
    insert(&t, 55, create_Chicken(16000, "사랑통닭"));
    insert(&t, 3, create_Chicken(17000, "아랑통닭"));
    insert(&t, 4, create_Chicken(18000, "자랑통닭"));
    insert(&t, 13, create_Chicken(19000, "차랑통닭"));
    insert(&t, 19, create_Chicken(20000, "카랑통닭"));
    insert(&t, 25, create_Chicken(21000, "타랑통닭"));
    insert(&t, 35, create_Chicken(22000, "파랑통닭"));
    insert(&t, 50, create_Chicken(23000, "하랑통닭"));
    insert(&t, 60, create_Chicken(24000, "꺄랑통닭"));
    traversal(levelorder, t.root);
    printf("\n");

    delete(&t, 10);
    traversal(levelorder, t.root);
    printf("\n");

    delete(&t, 20);
    traversal(levelorder, t.root);
    printf("\n");

    delete(&t, 55);
    traversal(levelorder, t.root);
    printf("\n");

    delete(&t, 4);
    traversal(levelorder, t.root);
    printf("\n");

    delete(&t, 5);
    traversal(levelorder, t.root);
    printf("\n");

    printf("%s", toString(search(&t, 35)->data));
}
