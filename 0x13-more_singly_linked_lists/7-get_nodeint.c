#include "lists.h"

/**
 * get_nodeint_at_index - furnction that returns the nth node of the list
 * @head: pointer to the head of the listint list
 * @index: ...
 *
 * Return: nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int i = 0;

	for (; curr != NULL && i < index; i++)
	{
		curr = curr->next;
	}

	return (curr);
}
