#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct package{
    int kg; char name[10];
}package;
typedef struct node{
    package data;
    struct node* link;
}node;
typedef struct stack_list{
    node* top;
}stack_list;
typedef struct listnode{
    package item;
    struct listnode* llink; struct listnode* rlink;
}listnode;
typedef struct dlist{
    struct listnode* head; struct listnode* tail;
}dlist;

void init(stack_list* sl, node* n, listnode* ln){
    sl->top=NULL; n->link=NULL; ln->llink=ln->rlink=NULL;
}

void push(stack_list* sl, int item){
    node* temp=(node *)malloc(sizeof(node));
    temp->data.kg=item; strcpy(temp->data.name, "원판");
    temp->link=sl->top; sl->top=temp;
}

void print_stack(stack_list* sl){
    for(node *s=sl->top; s!=NULL; s=s->link){
        printf("%d(%s)\n", s->data.kg, s->data.name);
    }
    printf("\n");
}

listnode* pop(stack_list* sl){
    node* pop;
    pop=sl->top;
    sl->top = sl->top->link;
    if(pop==NULL){
        printf("스택이 비었습니다."); return NULL;
    }
    return (listnode*)pop;
}

void bar(listnode* ln, dlist* d){
    listnode* head=(listnode *)malloc(sizeof(listnode));
    head->item.kg=20; strcpy(head->item.name, "바");
    head->llink = head->rlink = NULL;
    d->head=head;
    d->tail=head;
}

void line(stack_list* sl, dlist *d, char a){
    listnode* temp=pop(sl);
    switch (a) {
        case 'l':
            temp->rlink = d->head;
            d->head -> llink=temp;
            d->head = temp;
            temp->llink = NULL;
            break;
        case 'r':
            temp->llink=d->tail;
            d->tail->rlink=temp;
            d->tail=temp;
            temp->rlink=NULL;
            break;
    }
}

void print_line(listnode* ln, dlist* d){
    for(listnode* n = d->head; n != NULL ; n = n->rlink){
        printf("-%dkg(%s)-", n->item.kg, n->item.name);
    }
    printf("\n");
}

int main(){
    stack_list sl; node n; listnode ln; dlist d;
    init(&sl, &n, &ln); bar(&ln, &d);
    push(&sl,30);
    push(&sl,20);
    push(&sl,15);
    push(&sl,10);
    push(&sl,5);
    print_stack(&sl);

    line(&sl, &d, 'l');
    print_stack(&sl);
    print_line(&ln, &d);

    line(&sl, &d, 'r');
    print_stack(&sl);
    print_line(&ln, &d);

    line(&sl, &d, 'l');
    print_stack(&sl);
    print_line(&ln, &d);

    line(&sl, &d, 'l');
    print_stack(&sl);
    print_line(&ln, &d);

    line(&sl, &d, 'r');
    print_stack(&sl);
    print_line(&ln, &d);

    return 0;
}