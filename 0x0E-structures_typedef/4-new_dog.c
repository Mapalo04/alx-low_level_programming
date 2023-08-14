#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strcopy - copies the string
 * @s1: string to copy from
 *
 * Return: a new string
 */
char *_strcopy(char *str, char *s1)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	str[i] = '\0';
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
	int len1 = 0, len2 = 0;
	dog_t *nd;

	printf("done");
	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	nd->name = malloc(sizeof(char) * (len1 + 1));
	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->owner = malloc(sizeof(char) * (len2 + 1));
	if (nd->owner == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}

	_strcopy(nd->name, name);
	_strcopy(nd->owner, owner);
	nd->age = age;

	return (nd);
}
