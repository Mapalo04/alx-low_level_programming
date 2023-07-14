#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'prints all different possible combinations of three digits'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int first = 0;
	int sec = 0;
	int thrd = 0;

	while (first < 9)
{
		while (sec < 9)
{
			while (thrd < 10)
{
				if ((first < sec) && (sec < thrd))
{
					putchar('0' + first);
					putchar('0' + sec);
					putchar('0' + thrd);
					if ((first != 7) || (thrd != 9))
{
						putchar(',');
						putchar(' ');
}
}
				thrd++;
}
			sec++;
			thrd = 0;
}
		first++;
		sec = 0;
}
	putchar('\n');
	return (0);
}
