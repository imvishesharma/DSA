/**
 * @file LinkedList.h
 * @brief Function Prototype for Generic Linked List
 * 
 * @author Vishesh Sharma
 * @bug No known Bugs.
 */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <string.h>
#include <stdlib.h>

typedef enum{false, true} myBool;

typedef struct _x_struct_ll_1
{
	void *data;
	struct _x_struct_ll_1 *next;
} nodeLinkedList;

typedef struct _x_struct_ll_2
{
	nodeLinkedList *head;
	nodeLinkedList *end;
	size_t dsize;
	size_t size;
} LinkedList;

/**
 * @brief Linked List Initializer
 * 
 * @param obj Pointer to the LinkedList to be initialized.
 * @param dsize Size of the data to be inserted.
 * 
 * @return void.
 */
void init_ll(LinkedList *obj, const size_t dsize);

/**
 * @brief Inserting Value in Linked List
 * 
 * @param obj Pointer to the LinkedList.
 * @param value void* to the value to be inserted.
 * 
 * @return void.
 */
void insert_ll(LinkedList *obj, const void *value);

/**
 * @brief Get Value at specific index in Linked List
 * 
 * @param obj Pointer to the LinkedList.
 * @param index Value to be returned at given index.
 * 
 * @return void*.
 */
void* at_ll(LinkedList *obj, const size_t index);

/**
 * @brief Deletes Linked List
 * 
 * @param obj Pointer to the LinkedList.
 * 
 * @return void.
 */
void del_ll(LinkedList *obj);

/**
 * @brief Get the size of the Linked List
 * 
 * @param obj Pointer to the LinkedList.
 * 
 * @return size_t.
 */
size_t size_ll(LinkedList *obj);

/**
 * @brief Checks wether the Linked List is empty
 * 
 * @param obj Pointer to the LinkedList.
 * 
 * @return myBool Userdefiend boolean.
 */
myBool isEmpty(LinkedList *obj);

#endif /* LINKED_LIST_H */