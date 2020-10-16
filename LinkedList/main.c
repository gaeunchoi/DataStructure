#include <stdio.h>
#include "LinkedList.h"

int main() {
    dlist list;
    init(&list);

    insert(&list, 0, 10);
    insert(&list, 0, 20);
    insert_last(&list, 100);
    insert(&list, 0, 30);
    insert(&list, 1, 50);

    printf("%d\n", delete(&list, 0));
    printf("%d\n", delete(&list, 0));
    printf("%d\n", delete(&list, 0));
    printf("%d\n", delete(&list, 0));
    printf("%d\n", delete(&list, 0));

}
