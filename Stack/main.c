#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 7
typedef struct Stack {
    char champ[MAX_STACK_SIZE][10];
    int top;
}Stack;

void init(Stack *s){
    s->top = -1;
}

int is_empty(Stack *s){
    return (s->top == -1);
}

int is_full(Stack *s){
    return (s->top == MAX_STACK_SIZE -1);
}

void push(Stack *s, char item[]){
    if(is_full(s)) return;
    strcpy(s->champ[++(s->top)], item);
}

void die(Stack *s){
    if(is_empty(s)) return;
    // 죽었을때 처리해야하는게 pop이 아니므로 top 위치만 바꿔줌
    // top위치를 바꾸고 다음에 푸시를 하면 원래 있던 데이터 자리에 새로운 스택이 쌓이니까 !
    s->top = (s->top)/2;
}

void gameOver(Stack *s){
    for(int i = 0 ; i <= s->top ; i++)
        printf("%s\n", s->champ[i]);
}

int main() {
    Stack LeBlanc;
    init(&LeBlanc);

    push(&LeBlanc, "소라카");
    push(&LeBlanc, "애쉬");
    die(&LeBlanc);

    push(&LeBlanc, "티모");
    push(&LeBlanc, "릴리아");
    push(&LeBlanc, "카사딘");
    die(&LeBlanc);

    push(&LeBlanc, "티모");
    push(&LeBlanc, "애쉬");
    push(&LeBlanc, "소라카");
    push(&LeBlanc, "릴리아");
    push(&LeBlanc, "티모");
    push(&LeBlanc, "애쉬");
    push(&LeBlanc, "소라카");
    push(&LeBlanc, "릴리아");
    die(&LeBlanc);

    push(&LeBlanc, "카사딘");

    gameOver(&LeBlanc);

}
