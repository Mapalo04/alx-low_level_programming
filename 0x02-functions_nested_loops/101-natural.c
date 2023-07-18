#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int mult = 3;
	int total3 = 0;
	int total5 = 0;

	for (mult = 3; mult < 10; mult++)
{
		if (mult % 3 == 0)
{
			total3 = total3 + mult;
}
		else if (mult % 5 == 0)
{
			total3 = total3 + mult;
}
}
	printf("%d\n", total3);
	return (0);
}
