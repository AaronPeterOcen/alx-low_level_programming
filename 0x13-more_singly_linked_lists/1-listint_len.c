#include "lists.h"

/**
 * listint_len - returns the number of elements in the list
 * @h:pointer to the kist head
 * Return: number of elements in the linked lists
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;
	const listint_t *curr = h;

	for (; curr != NULL; number++)
	{
		curr = curr->next;
	}
	return (number);
}
