#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

void insertionAtEnd(node *head, int data)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
    node *p = head;
    while(p->next)
    {
        p = p->next;
    }
    p->next = temp;
}

void insertAtSpecificPosition(node *head, int data, int idx)
{
    /* Here idx != 0. idx >= 1. Linked List is 0 indexed*/
    node *temp = (node *)malloc(sizeof(node));
    node *p = head;
    temp->data = data;
    int i = 0;
    while(i < idx-1)
    {
        p = p->next;
        i++;
    }
    temp->next = p->next;
    p->next = temp;
}

void insertAtHead(node *head, int data)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->next = head;
    head = temp;
}

void printLL(node *head)
{
    node *temp = (node *)malloc(sizeof(node));
    while(temp)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
