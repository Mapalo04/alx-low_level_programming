#include <stdio.h>

void bmain(void)__attribute__((constructor));

/**
 * bmain - prints statements before main execution.
 */

void bmain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
