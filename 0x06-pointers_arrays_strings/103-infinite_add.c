#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: the buffer used to store the result
 * @size_r: buffer size
 *
 * Return: sum of the two numbers
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned int num;

	num = n;
	if (n < 0)
{
		_putchar(' ');
		num = -num;
}
	if (num / 10 != 0)
{
		print_number(num / 10);
}
	_putchar((num % 10) + '0');
}
