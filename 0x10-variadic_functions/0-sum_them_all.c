#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments given to it
 * @n: number to add
 * @...: more numbers
 *
 *Return: sum else 0;
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(num, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(num, unsigned int);
	va_end(num);
	return (sum);
}
