#include "main.h"


/**
 * swap_int - swaps the values of two integers a and b.
 * @*a: is a pointer
 * @*b: is a pointer
 */


void swap_int(int *a, int *b)
{
	int a1 = *a;

	*a = *b;
	*b = a1;
}
