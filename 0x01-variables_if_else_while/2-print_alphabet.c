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
	char lt;

	for (lt = 'a'; lt <= 'z'; lt++)
		putchar(lt);
	putchar('\n');
	return (0);
}
