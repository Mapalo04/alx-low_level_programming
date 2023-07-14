#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'prints the alphabet in lowercase'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char lt = 'z';

	while (lt >= 'a')
{
		putchar(lt);
		lt--;
}
	putchar('\n');
	return (0);
}
