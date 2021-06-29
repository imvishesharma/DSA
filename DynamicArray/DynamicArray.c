/**
 * @file DynamicArray.c
 * @brief This is the file containing Implemented Functions
 * 
 * All those functions are filled and implemented 
 * here. You can edit and modify what a function 
 * can do here.
 * 
 * @author Vishesh Sharma
 * @bug No know bugs.
 */ 

#include "DynamicArray.h"

void init_DynArr(DynamicArray *newDynArr, const size_t capacity, const size_t datasize)
{
	if(!capacity) {
		newDynArr->elements = NULL;
	} else {
		newDynArr->elements = malloc(datasize * capacity);
	}

	newDynArr->size = 0;
	newDynArr->capacity = capacity;
	newDynArr->dsize = datasize;
}

void set_DynArr(DynamicArray *obj, const size_t index, const void *value) 
{
	if(index < obj->capacity) {
		memcpy(obj->elements + obj->dsize * index, value, obj->dsize);
		obj->size++;
	}
}

void* get_DynArr(DynamicArray *obj, const size_t index)
{
	return obj->elements + obj->dsize * index;
}

void push_DynArr(DynamicArray *obj, const void *value)
{
	if(obj->capacity == 0) {
		obj->capacity++;
		obj->elements = malloc(obj->dsize * obj->capacity);
	}
	else if(obj->size == obj->capacity) {
		obj->capacity++;
		obj->elements = realloc(obj->elements, obj->dsize * obj->capacity);
	}

	set_DynArr(obj, obj->size, value);
}

void delete_DynArr(DynamicArray *obj)
{
	free(obj->elements);
	obj->size = 0;
	obj->capacity = 0;
	obj->dsize = 0;
}
