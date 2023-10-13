#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int enqueue(struct QueueElement**head, const int newValue)
{
	struct QueueElement* next = malloc(sizeof(struct QueueElement));
	if (next == NULL)
	{
		return 404;
	}
	next->value = newValue;
	next->back = *head;
	*head = next;
}

int dequeue(struct QueueElement** head)
{
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
	for (int i = queue->next; i != NULL; queue->next)
	{
		printf("%d ", queue->value);
	}
}

int main()
{
	struct QueueElement* queue = NULL;
	//const int errorCode1 = enqueue(&head, 2);
	//printf("%d\n", head->value);
}
