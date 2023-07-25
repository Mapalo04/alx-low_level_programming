#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * 
 * Return: 0 on success
 */

int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NuLL));

	i = 0;
	while (i < 100)
{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
}
		i++;
}
	return (0);
}
