#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to the first node in the list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
