#include <stdio.h>
#include <stdlib.h>
#include "util.h"

void application(int lenth)
{
    //removeNextNode(head);
    int num;
    printf("Welcome, How much you want to creat list? : ");
    scanf_s("%d", &num);
    NODE* curr = createNewNode(num);

    int element;
    while (num)
    {
        printf("input data of list:");
        scanf_s("%d", &element);
        appendNode(curr, element);
        num--;
    }
    printAllList(curr);
    freeAllList(curr);
}
