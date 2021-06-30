/**
 * @file Stack.h
 * @brief Function Prototypes for Stack
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

typedef struct _x_struct_stack {
    Node *top;
    size_t dsize;
    size_t size;
    size_t capacity;
} Stack;

/**
 * @brief Stack Initializer
 * 
 * @param obj Pointer to the Stack object to be initialized.
 * @param dsize Size of the data to be inserted.
 * @param capacity Maximum number of elements stack can store.
 * 
 * @return void.
 */
void init_stack(Stack *obj, const size_t dsize, const size_t capacity);

/**
 * @brief Pushing an element into Stack
 * 
 * @param obj Pointer to the Stack object.
 * @param data Value of the element to be inserted.
 * 
 * @return void.
 */
void push_stack(Stack *obj, const void *data);

/**
 * @brief Poping an element from Stack
 * 
 * @param obj Pointer to the Stack object.
 * 
 * @return void.
 */
void pop_stack(Stack *obj);

/**
 * @brief Returing top element of the Stack
 * 
 * @param obj Pointer to the Stack object.
 * 
 * @return void.
 */
void* top_stack(Stack *obj);

/**
 * @brief Freed up memmory occupied by Stack object
 * 
 * @param obj Pointer to the Stack object.
 * 
 * @return void.
 */
void del_stack(Stack *obj);

/**
 * @brief Checks is Stack is Empty or Not
 * 
 * @param obj Pointer to the Stack object.
 * 
 * @return myBool.
 */
myBool isEmpty_stack(Stack *obj);

/**
 * @brief Checks is Stack is Full or Not
 * 
 * @param obj Pointer to the Stack object.
 * 
 * @return myBool.
 */
myBool isFull_stack(Stack *obj);

#endif