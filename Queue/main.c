#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "queue.h"

int main()
{
    system("chcp 1251 > nul");

    ErrorCode result = ok;
  
    Queue* queue = NULL;

    printf("������� �������\n");
    createQueue(&queue);

    if (isEmpty(queue))
    {
        printf("������� �����\n\n");
    }
    else
    {
        printf("������� �� �����\n\n");
    }

    printf("��������� �������� � �������\n");
    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);

    printQueue(queue);

    if (isEmpty(queue))
    {
        printf("\n������� �����\n\n");
    }
    else
    {
        printf("\n������� �� �����\n\n");
    }

    printf("%d ��� ������ �������\n", front(queue, &result));
    printf("%d ��� ��������� �������\n\n", back(queue, &result));

    printf("������� ������� �������\n");
    dequeue(queue);

    printQueue(queue);

    printf("\n������� �������\n\n");
    deleteQueue(queue);

    if (isEmpty(queue))
    {
        printf("������� �����");
    }
    else
    {
        printf("������� �� �����");
    }

    free(queue);
    return 0;
}
