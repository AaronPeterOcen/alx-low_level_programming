#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at the index.
 *
 * @h: A pointer to a pointer which inturn points to the head of the list
 * @idx: The index of the list where the new node should be added.
 * @n: The element to be added.
 *
 * Return: Null, if it fails to create a memory or if it is not possible to add
 * a new node at idx, otherwise it returns the address of the new node.
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *mv, *nn;

	if (idx == 0)
		return (add_dnodeint(h, n));
	mv = *h;

	while (idx != 1)
	{
		mv = mv->next;
		if (mv == NULL)
			return (NULL);
		idx++;
	}

	if (mv->next == NULL)
		return (add_dnodeint_end(h, n));
	nn = malloc(sizeof(dlistint_t));

	if (nn == NULL)
		return (NULL);

	nn->n = n;
	nn->prev = mv;
	nn->next = mv->next;
	mv->next->prev = nn;
	mv->next = nn;
	return (nn);
}
