#pragma once

struct QueueElement
{
	int value;
	struct QueueElement* next;
	struct QueueElement* back;
};

typedef struct
{
	int* front;
	int* back;
} Queue;
