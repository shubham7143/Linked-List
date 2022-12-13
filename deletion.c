#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

void deleteEnd(node *head) 
{
    node *p = head;
    node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
}

node* deleteSpecificPosition(node *head, int idx)
{
    node *p = head;
    node *q = head->next;
    int i;
    for (i = 0; i < idx - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

node* deleteHead(node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
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

