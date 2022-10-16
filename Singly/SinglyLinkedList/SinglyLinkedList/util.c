#include "util.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50

NODE* createNewNode()
{
    NODE* head = (NODE*)malloc(sizeof(NODE));
    NODE* tail = (NODE*)malloc(sizeof(NODE));
    head->next = tail;
    head->index = 0;
    tail->next = NULL;
    tail->index = 999;

    int index = 0;
    return head;
}

void printAllList(NODE* curr)
{
    while (curr != NULL)
    {
        printf("data is %d \t addr is %x \n", curr->index, curr->next);
        curr = curr->next;
    }
}

void appendNode(NODE* target, int data)
{
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    newNode->next = target->next;
    newNode->index = data;

    target->next = newNode;
}

void removeByIndex(NODE* head , int idx)
{
    NODE* curr = head;
    NODE* temp = curr;
    while (curr != NULL)
    {
        if (curr->index == idx)
        {
            temp->next = curr->next;
            free(curr);
            return;
        }
        temp = curr;
        curr = curr->next;
    }

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