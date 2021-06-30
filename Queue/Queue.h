/**
 * @file Queue.h
 * @brief Function Prototypes for Queue
 * 
 * @author Vishesh Sharma
 * @bug No known bugs.
 */

#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include <string.h>

typedef enum{false, true} myBool;

typedef struct _x_struct_linear_node {
	void *data;
	struct _x_struct_linear_node *next;
} Node;

typedef struct _x_struct_queue {
    Node *front;
    Node *rear;
    size_t dsize;
    size_t size;
    size_t capacity;
} Queue;

/**
 * @brief Queue Initializer
 * 
 * @param obj Pointer to the Queue object to be initialized.
 * @param dsize Size of the data to be inserted.
 * @param capacity Maximum number of elements stack can store.
 * 
 * @return void.
 */
void init_queue(Queue *obj, const size_t dsize, const size_t capacity);

/**
 * @brief Add an element to end of Queue
 * 
 * @param obj Pointer to the Queue object.
 * @param data Value of the element to be inserted.
 * 
 * @return void.
 */
void enqueue(Queue *obj, const void *data);

/**
 * @brief Removing an element from front of Queue
 * 
 * @param obj Pointer to the Queue object.
 * 
 * @return void.
 */
void dequeue(Queue *obj);

/**
 * @brief Returing front element of the Queue
 * 
 * @param obj Pointer to the Queue object.
 * 
 * @return void.
 */
void* front(Queue *obj);

/**
 * @brief Freed up memmory occupied by Queue object
 * 
 * @param obj Pointer to the Queue object.
 * 
 * @return void.
 */
void del_queue(Queue *obj);

/**
 * @brief Checks is Queue is Empty or Not
 * 
 * @param obj Pointer to the Queue object.
 * 
 * @return myBool.
 */
myBool isEmpty_queue(Queue *obj);

/**
 * @brief Checks is Queue is Full or Not
 * 
 * @param obj Pointer to the Queue object.
 * 
 * @return myBool.
 */
myBool isFull_queue(Queue *obj);

#endif