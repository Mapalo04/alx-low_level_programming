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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
