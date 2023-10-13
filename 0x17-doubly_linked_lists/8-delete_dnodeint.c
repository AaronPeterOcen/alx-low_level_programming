#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at specified index
 *
 * @head: A pointer to the pointer which inturn points to the head of the list.
 * @index: The index at which an element to be deleted.
 *
 * Return: 1 true , -1 false
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *mv = *head;

	if (*head == NULL)
		return (-1);
	while (index != 0)
	{
		if (mv == NULL)
			return (-1);
		mv = mv->next;
		index--;
	}
	if (mv == *head)
	{
		*head = mv->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		mv->prev->next = mv->next;
		if (mv->next != NULL)
			mv->next->prev = mv->prev;
	}
	free(mv);
	return (1);
}
