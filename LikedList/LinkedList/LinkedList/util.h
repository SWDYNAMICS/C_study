#pragma once
#ifndef UTIL_H
#define UTIL_H
typedef struct node
{
    struct NODE* next;
    int data;
}NODE;

void addNode(NODE* target, int data);
void printAllList(NODE* curr);
void creatListBylenAndPrint(int lenth);
void freeAllList(NODE* curr);
#endif // !UTIL_H
