/**
 * @file debug.c
 * @brief Debugging The Linked List
 * 
 * Here is the code that has been used to test
 * our own Linked List Library Functions.
 * 
 * @author Vishesh Sharma
 * @bug No know bugs.
 */

#include <stdio.h>
#include "LinkedList.h"

int main() 
{
	/*
	LinkedList l;
	int x;

	init_ll(&l, sizeof(int));
	
	printf("is LinkedList Empty? : %d\n", isEmpty(&l));

	x = 5;
	insert_ll(&l, &x);

	x = 10;
	insert_ll(&l, &x);

	x = 15;
	insert_ll(&l, &x);
	
	
	printf("Size of LinkedList : %d\n", (int)size_ll(&l));

	printf("At Index 0, LinkedList Contains : %d\n", *(int*)at_ll(&l, 0));
	printf("At Index 1, LinkedList Contains : %d\n", *(int*)at_ll(&l, 1));
	printf("At Index 2, LinkedList Contains : %d\n", *(int*)at_ll(&l, 2));

	del_ll(&l);

	*/
	LinkedList l;
	char x[20];

	init_ll(&l, 20);
	
	printf("is LinkedList Empty? > %d\n", isEmpty(&l));

	strcpy(x, "First Elem");
	insert_ll(&l, &x);

	strcpy(x, "2nd Elem");
	insert_ll(&l, &x);

	strcpy(x, "3rd Elem");
	insert_ll(&l, &x);

	if(!isEmpty(&l)) 
	{
		printf("Size of LinkedList > %d\n", (int)size_ll(&l));
	}

	printf("At Index 0, LinkedList Contains : %s\n", (char*)at_ll(&l, 0));
	printf("At Index 1, LinkedList Contains : %s\n", (char*)at_ll(&l, 1));
	printf("At Index 2, LinkedList Contains : %s\n", (char*)at_ll(&l, 2));

	del_ll(&l);

	return 0;
}