#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strcopy - copies the string
 * @s1: string to copy from
 *
 * Return: a new string
 */
char *_strcopy(char *s1)
{
	int len = 0, i;
	char *str;

	while (s1[len])
		len++;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		str[i] = s1[i];
	}
	return (str);
}

/**
 * struct new_dog - creates a new dog
 * @name: new name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: a dog else NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);

	nd->name = _strcopy(name);
	nd->owner = _strcopy(owner);
	nd->age = age;

	return (nd);
}
