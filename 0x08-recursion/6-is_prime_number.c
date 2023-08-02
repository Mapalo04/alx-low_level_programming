#include "main.h"
int prime(int a, int b, int c);


/**
 * is_prime_number - checks if a number is prime..
 * @n: number to check.
 *
 * Return: 1 if input integer is a prime number else 0
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (prime(n, 1, 0));
}

/**
 * prime - finds the prime number
 * @a: the number
 * @b: int
 * @c: int
 *
 * Return: b the square root
 */

int prime(int a, int b, int c)
{
	if (b > a || c > 2)
		return (0);
	if (a % b == 0)
		c++;
	if (a == b && c == 2)
		return (1);

	return (prime(a, b + 1, c));
}
