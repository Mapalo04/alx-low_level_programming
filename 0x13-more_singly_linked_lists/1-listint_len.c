#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - counts number of elements in a list.
 * @h: the list to print
 *
 * Return: number of nodes in a list else 0
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
