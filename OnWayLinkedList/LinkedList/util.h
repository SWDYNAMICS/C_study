#pragma once
#ifndef UTIL_H
#define UTIL_H
typedef struct node
{
    struct NODE* next;
    int data;
}NODE;
NODE * createNode(int num);
void appendNode(NODE* target, int data);
void removeNode(NODE* target, int data);
void printAllList(NODE* curr);
void application(int lenth);
void freeAllList(NODE* curr);
#endif // !UTIL_H
