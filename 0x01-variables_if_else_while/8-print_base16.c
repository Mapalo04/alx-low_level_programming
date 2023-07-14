#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'prints all numbers in base 16 starting from 0'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char num = '0';

	while (num <= '9')
{
		putchar(num);
		num++;
}
	for (num = 'a'; num <= 'f'; num ++)
		putchar(num);
	putchar('\n');
	return (0);
}
