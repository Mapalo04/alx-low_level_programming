#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'prints the alphabet except q and e'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char lt;

	for (lt = 'a'; lt <= 'z'; lt++)
		if (lt != 'q')
			if (lt != 'e')
				putchar(lt);
	putchar('\n');
	return (0);
}
