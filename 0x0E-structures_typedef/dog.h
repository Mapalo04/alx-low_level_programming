#ifndef dog_h
#define dog_h

#include <stdio.h>

/**
 * struct dog - contains info about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: onwer's name
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
