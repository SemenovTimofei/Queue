#pragma once

typedef struct
{
	int value;
	Queue* atributes;
	QueueElement* next;
} QueueElement;

typedef struct
{
	int front;
	int back;
} Queue;
