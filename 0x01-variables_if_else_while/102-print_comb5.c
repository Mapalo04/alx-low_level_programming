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

	while (first < 99)
{
		while (sec < 100)
{
			if (first < sec)
{
				putchar('0' + (first / 10));
				putchar('0' + (first % 10));
				putchar(' ');
				putchar('0' + (sec / 10));
				putchar('0' + (sec % 10));
				if ((first != 98) || (sec != 99))
{
					putchar(',');
					putchar(' ');
}
}
			sec++;
}
		first++;
		sec = 0;
}
	putchar('\n');
	return (0);
}
