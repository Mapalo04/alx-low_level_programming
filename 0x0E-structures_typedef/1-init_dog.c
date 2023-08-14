#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes the variables of type struct dog
 * @d: initialize struct dog
 * @name: name argument of the structure
 * @age: age of the dog
 * @owner: of the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}