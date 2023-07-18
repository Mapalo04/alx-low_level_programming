#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	long int cur = 1;
	long int pre;
	long int forw = 2;
	int mult;

	for (mult = 1; mult <= 50; mult++)
{
		printf("%ld", cur);
		if (mult != 50)
{
		printf(", ");
}
		pre = cur;
		cur = forw;
		forw = pre + cur;
}
	printf("\n");
	return (0);
}
