#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the first node in the list
 * @index: the index to get
 *
 * Return: nth node of a list else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head && a < index)
	{
		head = head->next;
		a++;
	}

	if (!head)
		return (NULL);
	return (head);
}
