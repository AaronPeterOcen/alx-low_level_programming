#include "lists.h"

/**
 * pop_listint - deletes the head node of the list
 * @head: pointer to the head of the list
 *
 * Return: head nodes data n
 */
int pop_listint(listint_t **head)
{
	listint_t *i = *head;
	int headata;

	if (*head == NULL)
	{
		return (0);
	}
	headata = (*head)->n;

	*head = (*head)->next;
	free(i);

	return (headata);
}
