#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_num - checks if number is of digits
 * @num: num to check for digits
 *
 * Return: true if contains digits
 */

int check_num(char *num)
{
	int i = 0;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (-1);
	}
	return (i);
}


/**
 * _mult - multiplies integers
 * @num1: integer 1
 * @num2: integer 2
 *
 */

void _mult(char *num1, char *num2)
{
	int i, len1, len2;

	len1 = check_num(num1);
	len2 = check_num(num2);
	if (len1 != -1 && len2 != -1)
	{
		for (i = 0; i < len1; i++)
		{
			_putchar((num2[i] * num1[i]) % 10 + '0');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
}


/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	_mult(argv[1], argv[2]);
	return (0);
}
