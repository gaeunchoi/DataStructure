//
// Created by 최가은 on 2020/10/18.
//

#include "chicken.h"

chicken create_Chicken(int price, const char* name){
    chicken new = {price, name};
    return new;
}

char* toString(chicken c){
    char *msg = (char*)malloc(sizeof(char) * 100);
    sprintf(msg, "%s(%d)", c.name, c.price);
    return msg;
}