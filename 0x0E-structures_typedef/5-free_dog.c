#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog
 * @d: dog to free
 *
 */

void free_dog(dog_t *d)
{
	free(d);
}
