/**
 * @file debug.c
 * @brief Debugging The Queue
 * 
 * Here is the code that has been used to test
 * our own Queue Library Functions.
 * 
 * @author Vishesh Sharma
 * @bug No know bugs.
 */

#include <stdio.h>
#include "Queue.h"

int main() {
	Queue q1;
	int x;

	init_queue(&q1, sizeof(int), 5);

	dequeue(&q1);

	x = 1;
	enqueue(&q1, &x);
	printf("Top of Stack : %d\n", *(int*)front(&q1));

	x = 2;
	enqueue(&q1, &x);
	printf("Top of Stack : %d\n", *(int*)front(&q1));

	x = 3;
	enqueue(&q1, &x);
	printf("Top of Stack : %d\n", *(int*)front(&q1));

	x = 4;
	enqueue(&q1, &x);
	printf("Top of Stack : %d\n", *(int*)front(&q1));

	x = 5;
	enqueue(&q1, &x);
	printf("Top of Stack : %d\n", *(int*)front(&q1));

	printf("Size : %d\n", (int)q1.size);

	x = 6;
	enqueue(&q1, &x);
	printf("Top of Stack : %d\n", *(int*)front(&q1));

	dequeue(&q1);
	printf("Top of Stack : %d\n", *(int*)front(&q1));

	printf("Size : %d\n", (int)q1.size);

	del_queue(&q1);

;	return 0;
}
