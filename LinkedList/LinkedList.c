/**
 * @file LinkedList.c
 * @brief Implementaion of Linked List functions
 * 
 * All the functions availbe in the corresponding
 * header fire are implemented here, you can 
 * edit those functions wroking here.
 * 
 * @author Vishesh Sharma
 * @big No known Bugs.
 */

#include "LinkedList.h"
#include <stdio.h>

void init_ll(LinkedList *obj, const size_t dsize)
{
	obj->head = NULL;
	obj->end = NULL;
	obj->dsize = dsize;
	obj->size = 0;
}

void insert_ll(LinkedList *obj, const void *value)
{
	nodeLinkedList *newNode = (nodeLinkedList*)malloc(sizeof(nodeLinkedList));

	newNode->data = malloc(sizeof(obj->dsize));
	memcpy(newNode->data, value, obj->dsize);
	newNode->next = NULL;

	if(isEmpty(obj)) {
		obj->head = newNode;
		obj->end = newNode;
		obj->size++;

		return;
	}

	obj->end->next = newNode;
	obj->end = newNode;
	obj->size++;
}

void* at_ll(LinkedList *obj, const size_t index)
{
	if(index < obj->size) 
	{
		nodeLinkedList *itr = obj->head;

		for(size_t i = 0; i < index; ++i) 
		{
			itr = itr->next;
		}

		return itr->data;
	}

	return NULL;
}

void del_ll(LinkedList *obj)
{
	if(!isEmpty(obj)) 
	{
		nodeLinkedList *itr = obj->head, *del;

		while(itr != NULL) {
			del = itr;
			itr = itr->next;
			free(del->data);
			free(del);
		}
	}
}

size_t size_ll(LinkedList *obj)
{
	return obj->size;
}

myBool isEmpty(LinkedList *obj)
{
	if(obj->size) {
		return false;
	}
	return true;
}