// โจทย์ที่ 2: การลบโหนดใน Linked List
// เขียนโปรแกรมในภาษา C เพื่อลบโหนดใน Linked List ที่มีค่าที่กำหนดโดยผู้ใช้

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void deleteNode(struct Node** head_ref, int key) {
    struct Node* temp = *head_ref;
    struct Node* prev = NULL;
    
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == NULL) return;
    
    prev->next = temp->next;
    free(temp);
}

void printList(struct Node* n) {
    while (n != NULL) {
        printf("%d ", n->data);
        n = n->next;
    }
}

int main() {
    struct Node* head = NULL;
    
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    
    printf("Linked List before deletion: ");
    printList(head);
    
    int key;
    printf("\nEnter the key to delete: ");
    scanf("%d", &key);
    
    deleteNode(&head, key);
    
    printf("Linked List after deletion: ");
    printList(head);
    
    return 0;
}
