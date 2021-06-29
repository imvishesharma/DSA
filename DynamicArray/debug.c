/**
 * @file debug.c
 * @brief Debugging The Dynamic Array
 * 
 * Here is the code that has been used to test
 * our own Dynamic Array Library Functions.
 * 
 * @author Vishesh Sharma
 * @bug No know bugs.
 */

#include <stdio.h>
#include "DynamicArray.h"

int main()
{
	DynamicArray arr;
	int x;
	
	init_DynArr(&arr, 5, sizeof(int));
	
	for(int i = 0; i < 5; i++) 
	{
		x = 1 + rand()%50;
		set_DynArr(&arr, i, &x);

		printf("After Inserting at Index %d> Size : %d, Capacity : %d\n", i, (int)arr.size, (int)arr.capacity);
	}
	printf("\n");

	for(int i = 0; i < 5; i++) {
		printf("Value at Index %d> %d\n", i, *(int*)get_DynArr(&arr, i));
	}

	// Since Now Our Dynamic Array is Full we will insert new element using push_DynArr(...)

	x = 1 + rand()%50;
	push_DynArr(&arr, &x);

	printf("Value at Index %d> %d\n", (int)arr.size - 1, *(int*)get_DynArr(&arr, arr.size - 1));

	delete_DynArr(&arr);

	return 0;
}