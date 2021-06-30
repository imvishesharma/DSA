/**
 * @file debug.c
 * @brief Debugging The Linked List
 * 
 * Here is the code that has been used to test
 * our own Stack Library Functions.
 * 
 * @author Vishesh Sharma
 * @bug No know bugs.
 */

#include <stdio.h>
#include "Stack.h"

int main() {
	Stack s1;
	int x;

	init_stack(&s1, sizeof(int), 5);

	pop_stack(&s1);

	x = 1;
	push_stack(&s1, &x);
	printf("Top of Stack : %d\n", *(int*)top_stack(&s1));

	x = 2;
	push_stack(&s1, &x);
	printf("Top of Stack : %d\n", *(int*)top_stack(&s1));

	x = 3;
	push_stack(&s1, &x);
	printf("Top of Stack : %d\n", *(int*)top_stack(&s1));

	x = 4;
	push_stack(&s1, &x);
	printf("Top of Stack : %d\n", *(int*)top_stack(&s1));

	x = 5;
	push_stack(&s1, &x);
	printf("Top of Stack : %d\n", *(int*)top_stack(&s1));

	printf("Size : %d\n", (int)s1.size);

	x = 6;
	push_stack(&s1, &x);
	printf("Top of Stack : %d\n", *(int*)top_stack(&s1));

	pop_stack(&s1);
	printf("Top of Stack : %d\n", *(int*)top_stack(&s1));

	printf("Size : %d\n", (int)s1.size);

	del_stack(&s1);

;	return 0;
}
