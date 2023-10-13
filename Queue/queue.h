#pragma once

struct QueueElement
{
	int value;
	struct QueueElement* front;
	struct QueueElement* back;
};

struct Queue
{
	int front;
	int back;
};
