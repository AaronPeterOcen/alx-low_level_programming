#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: ...
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *n = NULL;

	n = *head;
	if (head)
	{
		while (*head)
		{
			*head = (*head)->next;
			n->next = p;
			p = n;
		}
		*head = p;
		return (*head);
	}
	return (NULL);
}
