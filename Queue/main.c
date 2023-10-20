#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "queue.h"

int main()
{
    system("chcp 1251 > nul");

    ErrorCode result = ok;

    Queue* queue;

    printf("Создаем очередь\n");
    createQueue(&queue);

    if (isEmpty(queue))
    {
        printf("Очередь пуста\n\n");
    }
    else
    {
        printf("Очередь не пуста\n\n");
    }

    printf("Добавляем элементы в очередь\n");
    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);

    printQueue(queue);

    if (isEmpty(queue))
    {
        printf("\nОчередь пуста\n\n");
    }
    else
    {
        printf("\nОчередь не пуста\n\n");
    }

    printf("%d это первый элемент\n", front(queue, &result));
    printf("%d это последний элемент\n\n", back(queue, &result));

    printf("Удаляем элемент очереди\n");
    dequeue(queue);

    printQueue(queue);

    printf("\nУдаляем очередь\n\n");
    deleteQueue(queue);

    if (isEmpty(queue))
    {
        printf("Очередь пуста");
    }
    else
    {
        printf("Очередь не пуста");
    }

    free(queue);
    return 0;
}