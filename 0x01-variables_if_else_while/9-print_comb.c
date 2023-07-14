#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'prints all single digit numbers from 0 separated by a comma'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
{
		putchar('0' +  num);
		if (num != 9)
{
			putchar(',');
			putchar(' ');
}
		num++;
}
	putchar('\n');
	return (0);
}
