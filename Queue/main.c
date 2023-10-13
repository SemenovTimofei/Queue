#include <stdio.h>
#include "queue.h"

QueueElement* newQueue()
{
	QueueElement* head = NULL;
	head = (QueueElement*)malloc(sizeof(QueueElement));
	return head;
}

int enqueue(QueueElement**head, const int newValue)
{
	if (*head == NULL)
	{
		return 404;
	}
	QueueElement* next = malloc(sizeof(QueueElement));
	if (next == NULL)
	{
		return 404;
	}
	next->value = newValue;
	next->next = *head;
	*head = next;
}

int dequeue(QueueElement** head)
{
	return 0;
}

int isEmpty(QueueElement* queue)
{
	return queue->value;
}

int front()
{

}

int back()
{

}

void printQueue(QueueElement* queue)
{
	for (int i = queue->next; i != NULL; queue->next)
	{
		printf("%d ", queue->value);
	}
}

int main()
{
	QueueElement* queue = newQueue();
	//const int errorCode1 = enqueue(&head, 2);
	//printf("%d\n", head->value);
}