#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to the first node in the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *now = *head;

	if (head == NULL)
		return;
	while (now)
	{
		tmp = now->next;
		free(now);
		now = tmp;
	}

	*head = NULL;
}
