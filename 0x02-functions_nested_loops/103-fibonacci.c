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
	long int sum;

	while (cur <= 4000000)
{
		if (cur % 2 == 0)
{
		sum = sum + cur;
}
		pre = cur;
		cur = forw;
		forw = pre + cur;
}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
