#include "main.h"


/**
 * _atoi - prints a string followed by a new line.
 * @s: is of type char
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int np, len, i, num, digit;

	len = 0;
	while (s[len] != '\0')
{
		len++;
}
	i = 0;
	np = 0;
	num = 0;
	while (i <= len)
{
		if (s[i] <= '9' && s[i] >= '0')
{
			if ((np == 0) && (s[i - 1] == '-'))
{
				np = 1;
}
			digit = s[i] - '0';
			num = num * 10 + digit;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
}
		i++;
}
	if (np == 1)
		num = num * -1;
	return (num);
}
