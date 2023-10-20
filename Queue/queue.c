#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "queue.h"

typedef struct QueueElement
{
    int value;
    struct QueueElement* next;
} QueueElement;

typedef struct Queue
{
    QueueElement* front;
    QueueElement* back;
} Queue;

ErrorCode createQueue(Queue** queue)
{
    *queue = malloc(sizeof(Queue));
    if (queue == NULL)
    {
        return outOfMemory;
    }
    (*queue)->front = NULL;
    (*queue)->back = NULL;

    return ok;
}

ErrorCode enqueue(Queue* queue, const int value)
{
    QueueElement* newElement = malloc(sizeof(QueueElement));
    if (newElement == NULL)
    {
        return queueIsEmpty;
    }
    newElement->value = value;
    newElement->next = NULL;
    if (queue->back == NULL)
    {
        queue->front = newElement;
        queue->back = newElement;
    }
    else
    {
        queue->back->next = newElement;
        queue->back = newElement;
    }

    return ok;
}

ErrorCode dequeue(Queue* queue)
{
    if (queue->front == NULL)
    {
        return queueIsEmpty;
    }
    Queue* trash = queue->front;
    queue->front = queue->front->next;
    if (queue->front == NULL)
    {
        queue->back = NULL;
    }

    free(trash);
    return ok;
}

void printQueue(Queue* queue)
{
    QueueElement* current = queue->front;
    while (current != NULL)
    {
        printf("%d\n", current->value);
        current = current->next;
    }
}

bool isEmpty(Queue* queue)
{
    return queue->front == NULL;
}

int front(Queue* queue, ErrorCode* errorCode)
{
    if (queue->front == NULL)
    {
        *errorCode = queueIsEmpty;
        return 404;
    }

    *errorCode = ok;
    return queue->front->value;
}

int back(Queue* queue, ErrorCode* errorCode)
{
    if (queue->front == NULL)
    {
        *errorCode = queueIsEmpty;
        return 404;
    }

    *errorCode = ok;
    return queue->back->value;
}

void deleteQueue(Queue* queue)
{
    while (queue->front != NULL)
    {
        Queue* trash = queue->front;
        queue->front = queue->front->next;
        free(trash);
    }
}