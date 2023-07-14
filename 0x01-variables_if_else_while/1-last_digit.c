#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'it will print the last digit of a random number'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	c = n % 10;
	if (c > 5)
		printf("Last digit of %d is %d  and is greater than 5\n", n, c);
	else if (c == 0)
		printf("Last digit of %d is %d  and is 0\n", n, c);
	else if ((c < 6) && (c > 0))
		printf("Last digit of %d is %d  and is less than 6 and not 0\n", n, c);
	return (0);
}
