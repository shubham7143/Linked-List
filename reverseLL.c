#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
} node;

node* reverseLL(node *head)
{
    node *prevNode = head;
    node *currNode = head->next;

    while(currNode) 
    {
        node *nextNode = currNode->next;
        currNode->next = prevNode;

        //update
        prevNode = currNode;
        currNode = nextNode;
    }

    head->next = NULL;
    head = prevNode;

    return head;
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

