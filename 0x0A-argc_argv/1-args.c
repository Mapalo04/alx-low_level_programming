#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: counts number of arguments
 * @argv: an array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int count;

	(void) argv;
	count = argc - 1;
	printf("%d\n", count);
	return (0);
}
