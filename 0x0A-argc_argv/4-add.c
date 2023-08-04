#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int is_num(char *str);

/**
 * main - Entry point
 * @argc: counts number of arguments
 * @argv: an array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int sum, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (is_num(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		sum = 0;
		printf("%d\n", sum);
	}
	return (0);
}

/**
 * is_num - checks if a string is a number.
 * @str: the string to check
 *
 * Return: 0 if false else true
 */

int is_num(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
	}
	return (0);
}
