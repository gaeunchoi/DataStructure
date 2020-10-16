#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dlinkedlist.h"
#include "stack.h"

int main() {
    LinkedStackType ls;
    init_stack(&ls);
    push(&ls, 30);
    push(&ls, 20);
    push(&ls, 15);
    push(&ls, 10);
    push(&ls, 5);

    dlist barbell;
    init_dlist(&barbell);

    element item[5];
    for(int i = 0 ; i < 5 ; i++){
        item[i].weight = pop(&ls);
        strcpy(item[i].name, "원판");
    }

    insert_left(&barbell, item[0]);
    insert_right(&barbell, item[1]);
    insert_left(&barbell, item[2]);
    insert_left(&barbell, item[3]);
    insert_right(&barbell, item[4]);

    print_list(&barbell);

}
