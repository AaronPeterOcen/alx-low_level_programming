#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: ...
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev= NULL;
	listint_t *next = NULL;
	listint_t *present;

	present= *head;
	while (*head)
	{
		next = present->next;
		present->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
