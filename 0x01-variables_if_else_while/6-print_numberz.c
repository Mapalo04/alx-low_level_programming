#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'prints all single digit numbers of bases 10 starting from 0'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
{
		putchar('0' +  num);
		num++;
}
	putchar('\n');
	return (0);
}
