#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - counts number of elements in a list.
 * @head: the head of a list
 * @n: the new data type to add.
 *
 * Return:the address of the new element else NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
