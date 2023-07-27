#include "lists.h"

/**
 * add_node_end - adds a new node at end of list
 * @head: double pointer to list
 * @str: str to in a new node
 *
 * Return: address of new element, NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *d;
	list_t *curr = *head;

	d = (list_t *)malloc(sizeof(list_t));
	if (d == NULL)
		return (NULL);

	d->str = strdup(str);
	if (d->str == NULL)
	{
		free(d);
		return (NULL);
	}
	d->len = strlen(str);
	d->next = NULL;

	if (*head == NULL)
	{
		*head = d;
	}
	else
	{
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = d;
	}
	return (d);
}
