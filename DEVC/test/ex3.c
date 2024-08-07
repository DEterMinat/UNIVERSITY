// โจทย์ที่ 1: การเพิ่มโหนดที่จุดเริ่มต้นของ Linked List
// เขียนโปรแกรมในภาษา C เพื่อเพิ่มโหนดที่จุดเริ่มต้นของ Linked List และแสดงผล Linked List ที่ถูกเพิ่มแล้ว

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void push(struct Node** head, int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;

}

void printList(struct Node* head){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp-> next;
    }
    printf("Null");
}

int main(){
    struct Node* head = NULL;
    push(&head,10);
    push(&head,20);
    push(&head,30);

    printf("Linked List : ");
    printList(head);
    return 0;
}
