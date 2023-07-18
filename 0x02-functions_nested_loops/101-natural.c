#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int mult = 3;
	int sum = 0;

	for (mult = 3; mult < 10; mult++)
{
		if (mult % 3 == 0)
{
			sum = sum + mult;
}
		else if (mult % 5 == 0)
{
			sum = sum + mult;
}
}
	printf("%d\n", sum);
	return (0);
}
