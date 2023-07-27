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
	int check = 0;
	int num1, num2;

	for (check = 0; n1[check] != '\0'; check++)
		num1 = num1 * 10 + n1[check];
	for (check = 0; n2[check] != '\0'; check++)
		num2 = num2 * 10 + n2[check];
	*r = num1 + num2;
	if (*r == size_r)
		return (0);
	return (r);
}
