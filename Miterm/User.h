//
// Created by 최가은 on 2020/10/25.
//

#ifndef MITERM_USER_H
#define MITERM_USER_H

typedef struct User {
    char *nick;
    char *tier;
    char *line;
}User;

User* create_User(char* nick, char* tier, char* line);
#endif //MITERM_USER_H
