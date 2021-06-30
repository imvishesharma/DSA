/**
 * @file Stack.c
 * @brief Implementaion of stack library functions
 * 
 * @author Vishesh Sharma
 * @bug No known bugs.
 */

#include <stdio.h>
#include "Stack.h"

void init_stack(Stack *obj, const size_t dsize, const size_t capacity) {
	obj->top = NULL;
	obj->size = 0;
	obj->dsize = dsize;
	obj->capacity = capacity;
}

void push_stack(Stack *obj, const void *data) {
	if(isFull_stack(obj)) {
		fprintf(stderr, "%s\n", "Stack is Full");
		return;
	}

	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = malloc(obj->dsize);
	memcpy(newNode->data, data, obj->dsize);
	newNode->next = NULL;

	if(isEmpty_stack(obj)) {
		obj->top = newNode;
		obj->size++;
		return;
	}

	newNode->next = obj->top;
	obj->top = newNode;

	obj->size++;
}

void pop_stack(Stack *obj) {
	if(isEmpty_stack(obj)) {
		fprintf(stderr, "%s\n", "Stack is Empty");
		return;
	}
	
	Node *del = obj->top;
	obj->top = obj->top->next;
	free(del->data);
	free(del);
	obj->size--;
}

void* top_stack(Stack *obj) {
	if(isEmpty_stack(obj)) {
		return NULL;
	}

	return obj->top->data;
}

void del_stack(Stack *obj) {
	while(!isEmpty_stack(obj)) {
		pop_stack(obj);
	}

	obj->top = NULL;
}

myBool isEmpty_stack(Stack *obj) {
	if(obj->size == 0) {
		return true;
	}
	return false;
}

myBool isFull_stack(Stack *obj) {
	if(obj->size == obj->capacity) {
		return true;
	}
	return false;
}