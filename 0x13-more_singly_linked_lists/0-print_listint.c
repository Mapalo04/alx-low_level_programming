#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all elements of a list.
 * @h: the list to print
 *
 * Return: number of nodes in a list else 0
 */

size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
