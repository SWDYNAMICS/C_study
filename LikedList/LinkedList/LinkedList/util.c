#include "util.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50
void printAllList(NODE* curr)
{
    while (curr != NULL)
    {
        printf("data is %d\n", curr->data);
        curr = curr->next;
    }
}
void addNode(NODE* target, int data)
{
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    newNode->next = target->next;
    newNode->data = data;

    target->next = newNode;
}
void creatListBylenAndPrint(int lenth)
{
    NODE* nodeArr[MAX_SIZE];
    for (int i = 0; i < lenth; i++)
        nodeArr[i] = (NODE*)malloc(sizeof(NODE));

    NODE* head = nodeArr[0];
    head->data = 0;
    head->next = nodeArr[0 + 1];
    for (int i = 1; i < lenth; i++)
    {
        nodeArr[i]->next = i == (lenth - 1) ? NULL : nodeArr[i + 1];
        nodeArr[i]->data = i * 10;
    }

    addNode(head, 99);
    NODE* curr = head;
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