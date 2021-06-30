/**
 * @file Stack.c
 * @brief Implementaion of Queue library functions
 * 
 * @author Vishesh Sharma
 * @bug No known bugs.
 */

#include <stdio.h>
#include "Queue.h"

void init_queue(Queue *obj, const size_t dsize, const size_t capacity) 
{
	obj->front = NULL;
	obj->rear = NULL;
	obj->size = 0;
	obj->dsize = dsize;
	obj->capacity = capacity;
}

void enqueue(Queue *obj, const void *data)
{
	if(isFull_queue(obj)) {
		fprintf(stderr, "%s\n", "Queue is Full");
		return;
	}

	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = malloc(obj->dsize);
	memcpy(newNode->data, data, obj->dsize);
	newNode->next = NULL;

	if(isEmpty_queue(obj)) {
		obj->front = newNode;
		obj->rear = newNode;
		obj->size++;
		return;
	}

	obj->rear->next = newNode;
	obj->rear = newNode;

	obj->size++;
}

void dequeue(Queue *obj)
{
	if(isEmpty_queue(obj)) {
		fprintf(stderr, "%s\n", "Queue is Empty");
		return;
	}
	
	Node *del = obj->front;
	obj->front = obj->front->next;
	free(del->data);
	free(del);
	obj->size--;

	if(obj->size == 0) {
		obj->front = NULL;
		obj->rear = NULL;
	}
}

void* front(Queue *obj)
{
	if(isEmpty_queue(obj)) {
		return NULL;
	}

	return obj->front->data;
}

void del_queue(Queue *obj)
{
	while(!isEmpty_queue(obj)) 
	{
		dequeue(obj);
	}

	obj->front = NULL;
}

myBool isEmpty_queue(Queue *obj) 
{
	if(obj->size == 0) {
		return true;
	}
	return false;
}

myBool isFull_queue(Queue *obj) 
{
	if(obj->size == obj->capacity) {
		return true;
	}
	return false;
}