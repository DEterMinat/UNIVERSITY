#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct Node {
    char data;
    struct Node * next;
};


// ฟังก์ชันสำหรับการแทรกโหนดใหม่
void insert(struct Node* prev_node, char new_data) {
    // ตรวจสอบว่าโหนดก่อนหน้าต้องไม่เป็น NULL
    if (prev_node == NULL) {
        printf("node cannot be NULL");
        return;
    }
    // สร้างโหนดใหม่
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    // ทำให้โหนดใหม่ชี้ไปยังโหนดถัดไปของโหนดก่อนหน้า
    new_node->next = prev_node->next;
    // ทำให้โหนดก่อนหน้าชี้ไปยังโหนดใหม่
    prev_node->next = new_node;
}



void deleteLastNode(struct Node* head) {
    // ถ้า linked list ว่างเปล่า
    if (head == NULL)
        return;

    // ถ้า linked list มีโหนดเดียว
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    // หาโหนดสุดท้ายและโหนดก่อนหน้าโหนดสุดท้าย
    struct Node* second_last = head;
    while (second_last->next->next != NULL)
        second_last = second_last->next;

    // ลบโหนดสุดท้าย
    free(second_last->next);
    second_last->next = NULL;
}

void push(struct Node** head, char value){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->next = (*head);
    (*head) = new_node;
}

bool search(struct Node* head, char key){
    struct Node* current = head;
    while (current != NULL){
        if(current->data == key)
            return true;
        current = current->next;
    }
    return false;
}

void makeCircular(struct Node* head){
    if (head==NULL) return;
    struct Node* temp = head;
    while(temp->next != NULL)
        temp = temp -> next;
    temp -> next = head;
    
}

void printlist(struct Node* node){
    while(node != NULL){
        printf("%c ->", node ->data);
        node = node -> next;
    }
    printf("NULL\n");

}

int main() {
    struct Node* head = (struct Node*) malloc(sizeof(struct Node));
    head->data = 'A';
    head->next = (struct Node*) malloc(sizeof(struct Node));
    head->next->data = 'B';
    head->next->next = (struct Node*) malloc(sizeof(struct Node));
    head->next->next->data = 'C';
    head->next->next->next = (struct Node*) malloc(sizeof(struct Node));
    head->next->next->next->data = 'D';
    head->next->next->next->next = (struct Node*) malloc(sizeof(struct Node));
    head->next->next->next->next->data = 'E';
    head->next->next->next->next->next = NULL;

    printf("Initial list: ");
    printlist(head);

    // แทรกโหนดใหม่ X ระหว่าง C และ D
    insert(head->next->next, 'X');
    printf("After inserting X: ");
    printlist(head);

    // ลบ node สุดท้าย (node E)
    deletelast(head);
    printf("After deleting last node: ");
    printlist(head);

    // เพิ่ม node Y เข้าไปเป็น node แรก
    push(&head, 'Y');
    printf("After adding Y at the beginning: ");
    printlist(head);

    // ค้นหาข้อมูล Z
    bool found = search(head, 'Z');
    if (found) {
        printf("Z found in the list\n");
    } else {
        printf("Z not found in the list\n");
    }

    // สร้าง circular linked list
    makeCircular(head);
    printf("Circular linked list created.\n");

    // หมายเหตุ: ถ้าต้องการพิมพ์ circular linked list ต้องกำหนดจุดหยุด ไม่งั้นจะวนไม่จบ
    struct Node* temp = head;
    int count = 0;
    printf("Circular list (print 10 nodes): ");
    while (count < 10) {
        printf(" %c -> ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("...\n");

    return 0;
}
