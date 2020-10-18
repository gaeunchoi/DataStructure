//
// Created by 최가은 on 2020/10/18.
//

#ifndef TREE_CHICKEN_H
#define TREE_CHICKEN_H
#include <stdio.h>
#include <stdlib.h>
typedef struct chicken {
    int price;
    const char* name;
}chicken;

chicken create_Chicken(int price, const char* name);
char* toString(chicken c);

#endif //TREE_CHICKEN_H
