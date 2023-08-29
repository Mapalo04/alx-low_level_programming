#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the first node of a list.
 * @head: pointer to the first node in the list
 *
 * Return: the node data else 0 if empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *now = *head;
	int n;

	*head = now->next;
	n = now->n;
	free(now);

	return (n);

}
