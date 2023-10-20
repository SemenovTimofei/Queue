#pragma once

typedef enum ErrorCode
{
	ok,
	queueIsEmpty,
	outOfMemory,
} ErrorCode;

typedef struct Queue Queue;

typedef struct QueueElement QueueElement;

// функция для создания очереди
ErrorCode createQueue(Queue** queue);

// функция для добавления элемента в очередь
ErrorCode enqueue(Queue* queue, const int value);

// функция для удаления элемента из очереди
ErrorCode dequeue(Queue* queue);

// функция для вывода всех элементов очереди
void printQueue(Queue* queue);

// функция для проверки пустой очереди
bool isEmpty(Queue* queue);

// функция, возвращающая первый элемент очереди
int front(Queue* queue, ErrorCode* errorCode);

// функция, возвращающая последний элемент очереди
int back(Queue* queue, ErrorCode* errorCode);

// функция, удаляющая очередь
void deleteQueue(Queue* queue);