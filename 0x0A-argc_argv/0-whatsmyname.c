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
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
