#include "main.h"
int check_palindrom(char *s, char i, int len);
int _strlen(char *s);


/**
 * is_palindrome - checks if a string is palindrome.
 * @s: string to check
 *
 * Return: 1 if palindrome else 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrom(s, 0, _strlen(s)));
}

/**
 * _strlen - finds the length of a string
 * @s: the string to check
 *
 * Return: the strings length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}



/**
 * check_palindrom - checks for palindrome possibility
 * @s: string
 * @i: iterator
 * @len: size of string
 *
 * Return: 1 if palindrome else 0
 */

int check_palindrom(char *s, char i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);

	return (check_palindrom(s, i + 1, len - 1));
}

