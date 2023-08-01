#include "lists.h"

/**
 * free_listint2 - frees the listint list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *i = *head;
	listint_t *tp;

	if (head == NULL)
	{
		return;
	}
	for (; i != NULL;)
	{
		tp = i;
		i = i->next;
		free(tp);
	}
	*head = NULL;
}
