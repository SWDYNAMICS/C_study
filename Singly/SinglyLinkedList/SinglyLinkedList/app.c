#include <stdio.h>
#include <stdlib.h>
#include "util.h"

void application()
{
    //removeNextNode(head);
    int num;
    printf("Welcome, How much you want to creat list? : ");
    scanf_s("%d", &num);
    NODE* head = createNewNode(num);

    int element;
    while (num)
    {
        printf("input data of list:");
        scanf_s("%d", &element);
        appendNode(head, element);
        num--;
    }
    removeByIndex(head, 7);
    printAllList(head);
    freeAllList(head);
}
