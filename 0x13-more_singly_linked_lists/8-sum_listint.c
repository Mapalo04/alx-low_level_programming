#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums up all the data in the list.
 * @head: pointer to the first node in the list
 *
 * Return: sum of all the data else 0;
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
