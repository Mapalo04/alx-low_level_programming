#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: the head of a list
 * @n: the new data type to add.
 *
 * Return:the address of the new element else NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *previous = *head;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (previous->next)
		previous = previous->next;
	previous->next = ptr;
	return (ptr);
}
