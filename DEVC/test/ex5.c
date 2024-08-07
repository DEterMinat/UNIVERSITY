// โจทย์ที่ 1: การตรวจสอบสมดุลของวงเล็บในนิพจน์
// เขียนโปรแกรมในภาษา C เพื่อตรวจสอบว่านิพจน์ทางคณิตศาสตร์มีวงเล็บที่สมดุลหรือไม่

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100


typedef struct Stack {
    int top;
    char arr[MAX];
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

void push(Stack* stack , char data){
    if(isFull(stack)){
        printf("Stack overflow\n");
        return;
    }
    stack -> arr[++stack->top] = data;
}


char pop(Stack* stack){
    if(isEmpty(stack)){
        printf("Stack Underflow\n");
        return '\0';
    }
    return stack->arr[stack->top--];
}

int isMatchPair(char char1, char char2){
    if(char1 == '(' &&char2 ==')'){
        return 1;
    }
    else if (char1 == '{' && char2 == '}'){
        return 1;
    }
    else if (char1 == '[' && char2 == ']'){
        return 1;
    }
    return 0;
}

int areBracketBalanced(char exp[]){
    Stack stack;
    initialize(&stack);

    for (int i = 0 ; i < strlen(exp); i++){
        if( exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            push(&stack,exp[i]);
        }
        if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
            if(isEmpty(&stack)){
                return 0;
            }
        }
    }    
    return isEmpty(&stack);

}

int main(){
    char exp[MAX];
    printf("Enter an exp : ");
    scanf("%s",exp);

    if(areBracketBalanced(exp)){
        printf("Balanced\n");
        
    }
    else {
        printf("Not balance\n");
    }

    return 0;
}