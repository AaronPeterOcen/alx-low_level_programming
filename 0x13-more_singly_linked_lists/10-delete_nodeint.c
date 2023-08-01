#include "lists.h"

/**
 * delete_nodeint_at_index - 
 * @head:
 * @index:
 *
 * Return: 1 if success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c = *head;
	listint_t *t;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	
	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (0);
	}
}
