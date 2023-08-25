#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the begin of the list.
 * @head: the first node in the list
 * @str: the node to add
 *
 * Return: NULL if fails else address of new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	new_n = malloc(sizeof(list_t));
	if (!new_n)
		return (NULL);
	new_n->str = strdup(str);
	new_n->len = len;
	new_n->next = (*head);
	(*head) = new_n;

	return (*head);
}
