#include "lists.h"

/**
 * add_node - add a new node at list start
 * @head: double pointer to list
 * @str: str to be added
 *
 * Return: Address of the new element, NULL other wise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *d;
	/*
	 * size_t len;
	 */

	d = (list_t *)malloc(sizeof(list_t));
	d->str = strdup(str);
	if (d == NULL)
	{
		return (NULL);
	}

	if (d->str == NULL)
	{
		free(d);
		return (NULL);
	}

	d->len = strlen(str);
	d->next = *head;
	(*head) = d;

	return (d);
}
