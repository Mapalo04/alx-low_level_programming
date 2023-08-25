#include "lists.h"
#include <stdio.h>

/**
 * list_len - prints all the elements of a list_t list.
 * @h: the pointer to the list to measure
 *
 * Return: the number of nodes printed by the program
 */


size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!h->str)
			continue;
		h = h->next;
		a++;
	}
	return (a);
}
