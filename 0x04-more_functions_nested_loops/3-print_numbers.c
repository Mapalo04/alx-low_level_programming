#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 *
 * Return: 0 if success
 */


void print_numbers(void)
{
	int num = 0;

	while (num < 10)
{
		_putchar('0' + num);
		num++;
}
	_putchar('\n');
	return (0);
}
}
