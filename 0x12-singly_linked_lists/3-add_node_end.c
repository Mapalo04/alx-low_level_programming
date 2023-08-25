#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node to the end of a list.
 * @head: the first node in the list
 * @str: the node to add
 *
 * Return: NULL if fails else address of new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n, *tmp = *head;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	new_n = malloc(sizeof(list_t));
	if (!new_n)
		return (NULL);
	new_n->str = strdup(str);
	new_n->len = len;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_n;

	return (new_n);
}
