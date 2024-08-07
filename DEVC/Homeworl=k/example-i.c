// This source code was edited from Thareja, Reema - Data structures using C (2014, Oxford University Press)
//  by Boonchoo Jitnupong

// ขอให้ทดลองใช้งานโปรแกรมดังกล่าว และเมื่อทำการทดลองแล้ว ขอให้สร้าง function เพิ่มเติมเข้าไป โดยต่อยอดให้โปรแกรมมี function ตามคำสั่งต่อไปนี้
// find_data() สำหรับการ ค้นหา node ที่เราต้องการ โดยรับค่าจากผู้ใช้ โดยแสดงผลข้อมูลดังกล่าว พร้อมตำแหน่งของข้อมูลบน memory หากพบข้อมูล หรือหากไม่พบข้อมูลให้แสดงผลว่าไม่พบข้อมูล
// find_max() หาข้อมูลที่มีค่ามากที่สุด
// find_min() หาข้อมูลที่มีค่าน้อยที่สุด
// find_average() หาค่าเฉลี่ยของข้อมูลใน linked list

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

// prepare the linked list
struct node *start = NULL;
struct node *create_ll();
struct node *display();
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *find_data(struct node *, int);
struct node *find_max(struct node *);
struct node *find_min(struct node *);
struct node *find_average(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);

struct node *delete_list(struct node *);

void main()
{
    int option, value;
    do
    {
        printf("\n\n * ****MAIN MENU * ****");
        printf("\n 1: Create a list");
        printf("\n 2: Display the list");
        printf("\n 3: Add a node at the beginning");
        printf("\n 4: Add a node at the end");
        printf("\n 5: Find Value data ");
        printf("\n 6: Find Average data ");
        printf("\n 7: Delete a node from the beginning");
        printf("\n 8: Delete a node from the end");
        printf("\n 9: Find data Max");
        printf("\n 10: Find data Min");
        printf("\n 11: Exit");

        printf("\nSelect your choice: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            start = create_ll(start);
            printf("\n LINKED LIST CREATED");
            break;
        case 2:
            start = display(start);
            break;
        case 3:
            start = insert_beg(start);
            break;
        case 4:
            start = insert_end(start);
            break;
        case 5:
            printf("\n Enter the data to find: ");
            scanf("%d", &value);
            start = find_data(start, value);
            break;
        case 6:
            start = find_average(start);
            break;
        case 7:
            start = delete_beg(start);
            break;
        case 8:
            start = delete_end(start);
            break;
        case 9:
            start = find_max(start);
            break;
        case 10:
            start = find_min(start);
            break;
        }
       

    } while (option != 11);
}

struct node *create_ll()
{
    struct node *new_node, *ptr;
    int num[] = {20, 30, 50, 60, 90}, i;
    
    for(i = 0; i < 5; i++)
    {
        // create the empty node
        new_node = (struct node *)malloc(sizeof(struct node));
        // assign the data of the node
        new_node->data = num[i];

        if (start == NULL)
        {
            new_node->next = NULL;
            start = new_node;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = NULL;
        }
        
    }
    return start;
}

// function to display the linked list
struct node *display()
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        printf("%p\t", ptr->next);
        ptr = ptr->next;
    }
    return start;
}

// function to insert a node at the beginning
struct node *insert_beg(struct node *start)
{
    struct node *new_node;
    int num;
    printf("\n Enter the data: ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = start;
    start = new_node;
    return start;
}

// function to insert a node at the end
struct node *insert_end(struct node *start)
{
    struct node *ptr, *new_node;
    int num;
    printf("\n Enter the data: ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = NULL;
    ptr = start;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = new_node;
    return start;
}

// function to delete a node from the beginning
struct node *delete_beg(struct node *start)
{
    struct node *ptr;
    ptr = start;
    start = start->next;
    free(ptr);
    return start;
}

// function to delete a node from the end
struct node *delete_end(struct node *start)
{
    struct node *ptr, *preptr;
    ptr = start;
    while (ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr);
    return start;
}
struct node *find_data(struct node *start, int value ){
    struct node *ptr = start;
    int found = 0;
    while(ptr != NULL){
        if(ptr->data == value){
                printf("Data %d found at memory location %p\n",ptr->data,(void*)ptr);
                found =1;
                break;
        }
        ptr = ptr -> next;

    }
    if (!found){
        printf("Data %d not found\n",value);
    }
    return start;
}
struct node *find_max(struct node *start){
    struct node *ptr = start;
    int max = start->data;
    printf("Find Max \n");
    while(ptr != NULL){
        if(ptr -> data > max){
            max = ptr->data;

        }
        ptr = ptr->next;
    }
    printf("\nMax value: %d",max);
    return start;

}

struct node *find_min(struct node *start){
    struct node *ptr = start;
    int min = start->data;
    printf("Find Min\n");
    while(ptr != NULL){
        if(ptr ->data<min){
            min = ptr ->data;
        }
        ptr = ptr->next;
    }
    printf("\nMin value: %d",min);
    return start;
}

struct node *find_average(struct node *start){
    struct node *ptr = start;
    int sum = 0 ,  count = 0;
    float avg;
    while(ptr != NULL){
        sum += ptr->data;
        count++;
        ptr = ptr->next;
    }
    if (count!=0){
        avg = sum / count;
        printf("Average : %.2f\n",avg);
    }
    else{
        printf("Emtry\n");
    }
    return start;
}