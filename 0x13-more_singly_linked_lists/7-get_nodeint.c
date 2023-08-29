#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - returns the nth node of a list
 * @head: pointer to the first node in the list
 *
 * Return: nth node of a list else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head && a <= index)
	{
		head = head->next;
		a++;
	}
	
	if (a <= index)
		return (NULL);
	return (head);
}
