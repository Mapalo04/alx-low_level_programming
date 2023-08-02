#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: the number to find the factorial of
 *
 * Return: 0 if error else factorial number
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	n = n * factorial(n - 1);
	return (n);
}
