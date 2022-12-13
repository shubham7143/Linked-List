#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node* middle(node *head)
{
    node *hare = head;
    node *turtle = head;
    while(hare != NULL && hare->next != NULL && hare->next->next != NULL)
    {
        hare = hare->next->next;
        turtle = turtle->next;
    }
    return turtle;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
