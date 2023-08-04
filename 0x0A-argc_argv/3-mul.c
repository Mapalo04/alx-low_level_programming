#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: counts number of arguments
 * @argv: an array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}
	else
	{
		prod = 1;
		printf("Error\n");
		return (prod);
	}
	return (0);
}
