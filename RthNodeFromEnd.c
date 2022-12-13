#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node* RthNodeFromEnd(node *head, int r)
{
    node *start = head;
    node *end = head;
    while(r)
    {
        end = end->next;
        r--;
    }
    while(end)
    {
        start = start->next;
        end = end->next;
    }
    return start;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}

