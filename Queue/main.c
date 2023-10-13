#include <stdio.h>

typedef struct
{
	int value;
	QueueElement* next;
} QueueElement;

typedef struct
{
	int front;
	int back;
} Queue;

int enqueue(Queue* **head, int newValue)
{

}

int isEmpty(Queue* queue)
{
	return 0;
}

int main()
{
	Queue* queue = NULL;
}