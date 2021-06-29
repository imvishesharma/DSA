/**
 * @file DynamicArray.h
 * @brief Function Prototypes for Dynamic Array.
 * 
 * This is the header file for Implementaion of
 * Dynamic Array i.e Array that can be modified
 * during Runtime.
 * 
 * @author Vishesh Sharma
 * @bug No know bugs.
 */

#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include <string.h>
#include <stdlib.h>

typedef struct _x_struct_1
{
	void *elements;
	size_t size;
	size_t capacity;
	size_t dsize;
} DynamicArray;

/**
 * @brief Initializes Dynamic Array Object.
 * 
 * @param *newDynArr Dynamic Array Object to be initialized.
 * @param capacity Capacity of the Dynamic Array.
 * @param dsize Size of the data to be inserted.
 * 
 * @return Void.
 */
void init_DynArr(DynamicArray *newDynArr, const size_t capacity, const size_t dsize);

/**
 * @brief Setter function to set the value at given index.
 * 
 * @param *obj Initialized Dynamic Array Object.
 * @param index Index of the element.
 * @param *value Address of the value to be set.
 * 
 * @return Void.
 */ 
void set_DynArr(DynamicArray *obj, const size_t index, const void *value);

/**
 * @brief Getter function to get the value at given index.
 * 
 * @param *obj Initialized Dynamic Array Object.
 * @param index Index of the element to be fetched.
 * 
 * @return Address of the value.
 */ 
void* get_DynArr(DynamicArray *obj, const size_t index);

/**
 * @brief Function for pushing new elment at end of the Dynamic Array.
 * 
 * @param *obj Initialized Dynamic Array Object.
 * @param *value Address of the value to be pushed.
 * 
 * @return Void.
 */
void push_DynArr(DynamicArray *obj, const void *value);

/**
 * @brief Frees the memmory occupied by the Dynamic Array.
 * 
 * @param *obj Initialized Dynamic Array Object.
 * 
 * @return Void.
 */
void delete_DynArr(DynamicArray *obj);

#endif /* DYNAMIC_ARRAY_H */