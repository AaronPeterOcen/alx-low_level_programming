#include "lists.h"

/**
 * free_listint - frees the linked list
 * @head: pointer to head of listint_T list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *curr = head;

	for (; curr != NULL;)
	{
		listint_t *i = curr;

		curr = curr->next;
		free(i);
	}
}
