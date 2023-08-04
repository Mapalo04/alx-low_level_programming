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
	int coins[5] = {25, 10, 5, 2, 1};
	int i, amount;
	int coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	amount = atoi(argv[1]);
	while (amount > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (amount - coins[i] >= 0)
			{
				amount = amount - coins[i];
				coin++;
				break;
			}
		}
	}
	printf("%d\n", coin);

	return (0);
}

