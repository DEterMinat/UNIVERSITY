// โจทย์ที่ 2: การแปลงนิพจน์ Infix เป็น Postfix
// เขียนโปรแกรมในภาษา C เพื่อแปลงนิพจน์ Infix เป็น Postfix โดยใช้ Stack

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 1000

typedef struct Stack {
    int top;
    int arr[MAX];
} Stack;

void initialize(Stack* stack) {
    stack->top = -1;
}

int isFull(Stack* stack) {
    return stack->top == MAX - 1;
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

void push(Stack* stack, char data) {
    if (isFull(stack)) {
        printf("Stack overflow\n");
        return;
    }
    stack->arr[++stack->top] = data;
}

char pop(Stack* stack){
    if(isEmtry(stack)){
        printf("Stack Underflow\n");
        return;
    }
    return stack->arr[stack->top--];
}

char peek(Stack* stack){
    if (isEmpty(stack)){
        return'\0';
    }
    return stack->arr[stack->top];
}

int predencence(char op){
    switch(op){
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
    
    
}