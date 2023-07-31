#include "lists.h"

/**
 * add_nodeint - adds a new node at the start of listint
 * @head: pointer to list head
 * @n:data to be kept in the new node
 *
 * Return: address of the new element, or NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
	{
		return (NULL);
	}

	nnode->n = n;
	nnode->next = *head;
	*head = nnode;

	return (nnode);
}
