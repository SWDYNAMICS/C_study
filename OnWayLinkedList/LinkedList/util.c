#include "util.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50
NODE * createNode(int num)
{
    NODE* head = (NODE *)malloc(sizeof(NODE));
    NODE* tail = (NODE*)malloc(sizeof(NODE));
    head->next = tail;
    head->data = 0;
    tail->next = NULL;
    tail->data = 999;

    int index = 0;
    while (num)
    {
        appendNode(head, num--);
    }
    return head;
}

void printAllList(NODE* curr)
{
    while (curr != NULL)
    {
        printf("data is %d \t addr is %x \n", curr->data, curr->next);
        curr = curr->next;
    }
}

void appendNode(NODE* target, int data)
{
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    newNode->next = target->next;
    newNode->data = data;

    target->next = newNode;
}

void removeNextNode(NODE* target)
{
    NODE* rmNode = target->next;
    target->next = rmNode->next;
    
    free(rmNode);

}

void application(int lenth)
{ 
    //removeNextNode(head);
    NODE* curr = createNode(10);
    printAllList(curr);
    freeAllList(curr);
}

void freeAllList(NODE* curr)
{
    NODE* temp;
    while (curr != NULL)
    {
        temp = curr;
        curr = curr->next;      
        free(temp);
    }
}