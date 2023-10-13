#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int enqueue(struct QueueElement** head, const int newValue)
{
	struct QueueElement* next = malloc(sizeof(struct QueueElement));
	if (next == NULL)
	{
		return 404;
	}
	next->value = newValue;
	next->back = *head;
	*head = next;
	return 0;
}

int dequeue(struct QueueElement** head)
{
	if (*head == NULL)
	{
		return 404;
	}

	return 0;
}

int isEmpty(struct QueueElement* queue)
{
	return queue->value;
}

int front()
{

}

int back()
{

}

void printQueue(struct QueueElement* queue)
{
	
}

int main()
{
	struct QueueElement* queue = NULL;
	struct Queue atributes;
	atributes.front = NULL;
	atributes.back = NULL;
	queue->front = &(atributes.front);
	printf("%d", queue->front);
}
