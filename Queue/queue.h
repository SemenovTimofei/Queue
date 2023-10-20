#pragma once

typedef enum ErrorCode
{
	ok,
	queueIsEmpty,
	outOfMemory,
} ErrorCode;

typedef struct Queue Queue;

typedef struct QueueElement QueueElement;

// ������� ��� �������� �������
ErrorCode createQueue(Queue** queue);

// ������� ��� ���������� �������� � �������
ErrorCode enqueue(Queue* queue, const int value);

// ������� ��� �������� �������� �� �������
ErrorCode dequeue(Queue* queue);

// ������� ��� ������ ���� ��������� �������
void printQueue(Queue* queue);

// ������� ��� �������� ������ �������
bool isEmpty(Queue* queue);

// �������, ������������ ������ ������� �������
int front(Queue* queue, ErrorCode* errorCode);

// �������, ������������ ��������� ������� �������
int back(Queue* queue, ErrorCode* errorCode);

// �������, ��������� �������
void deleteQueue(Queue* queue);