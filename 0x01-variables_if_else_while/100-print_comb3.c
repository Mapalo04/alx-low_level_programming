#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'prints all different possible combinations of two digits'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int first = 0;
	int sec = 0;

	while (first < 9)
{
		while (sec < 10)
{
			if (first < sec)
{
				putchar('0' + first);
				putchar('0' + sec);
				if ((first != 8) || (sec != 9))
{
					putchar(',');
					putchar(' ');
}
}
}
		first++;
		sec = 0;
}
	putchar('\n');
	return (0);
}
