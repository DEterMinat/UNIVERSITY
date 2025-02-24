// This source code was edited from Thareja, Reema - Data structures using C (2014, Oxford University Press)
//  by Boonchoo Jitnupong

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

struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);

struct node *delete_list(struct node *);

void main()
{
    int option;
    do
    {
        printf("\n\n * ****MAIN MENU * ****");
        printf("\n 1: Create a list");
        printf("\n 2: Display the list");
        printf("\n 3: Add a node at the beginning");
        printf("\n 4: Add a node at the end");

        printf("\n 7: Delete a node from the beginning");
        printf("\n 8: Delete a node from the end");

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

        case 7:
            start = delete_beg(start);
            break;
        case 8:
            start = delete_end(start);
            break;
        }
    } while (option != 5);
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