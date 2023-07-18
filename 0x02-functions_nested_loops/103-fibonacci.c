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
	int sum;

	while (cur <= 4000000)
{
		pre = cur;
		cur = forw;
		forw = pre + cur;
		if (cur % 2 == 0)
{
		sum = sum + cur;
}
}
	printf("%d", sum);
	printf("\n");
	return (0);
}
