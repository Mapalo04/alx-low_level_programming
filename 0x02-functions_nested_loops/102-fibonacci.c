#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	int cur = 1;
	int pre;
	int forw = 2;
	int mult;

	for (mult = 1; mult <= 50; mult++)
{
		printf("%d, ", cur);
		pre = cur;
		cur = forw;
		forw = pre + cur;
}
	printf("\n");
	return (0);
}
