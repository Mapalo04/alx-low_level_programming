#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
	int b, c;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotdata[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; str[b] != '\0'; b++)
{
		for (c = 0; c < 52; j++)
		{
			if (s[b] == rotdata[c])
			{
				s[b] = rotdata[c];
				break;
			}
		}
}
	return (str);
}
