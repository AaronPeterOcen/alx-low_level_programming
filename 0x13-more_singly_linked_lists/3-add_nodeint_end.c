#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the listint end
 * @head: pointer to the head of list
 * @n: integer to store the new node
 *
 * Return: address of the new element, NULL otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode;
	listint_t *i;
	i = *head;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
	{
		return (NULL);
	}
	nnode->n = n;
	nnode->next = NULL;

	if (i == NULL)
	{
		*head = nnode;
		return (nnode);
	}

	for (;i->next != NULL; i = i->next)
		;
	i->next = nnode;
	return (nnode);
}
