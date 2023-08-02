#include "main.h"
int fsqrt(int a, int b);


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 *
 * Return: -1 if error else the square number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (fsqrt(n, 0));
}

/**
 * fsqrt - finds the sqrt of a number
 * @a: the number
 * @b: the sqaure root
 *
 * Return: b the square root
 */

int fsqrt(int a, int b)
{
	if (b * b > a)
		return (-1);
	if (b * b == a)
		return (b);

	return (fsqrt(a, b + 1));
}
