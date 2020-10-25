//
// Created by 최가은 on 2020/10/25.
//
#include <stdlib.h>
#include "User.h"

User* create_User(char* nick, char* tier, char* line){
    User* new = (User*)malloc(sizeof(User));
    new->nick = nick;
    new->tier = tier;
    new->line = line;
    return new;
}

