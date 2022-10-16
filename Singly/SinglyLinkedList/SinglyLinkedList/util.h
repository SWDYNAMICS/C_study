#pragma once
#ifndef UTIL_H
#define UTIL_H
typedef struct node
{
    struct NODE* next;
    int index;
}NODE;

NODE* createNewNode();
void appendNode(NODE* target, int data);
void removeByIndex(NODE* target, int data);
void connectBeforeFree(NODE* target);
void printAllList(NODE* curr);
void freeAllList(NODE* curr);

#endif // !UTIL_H
