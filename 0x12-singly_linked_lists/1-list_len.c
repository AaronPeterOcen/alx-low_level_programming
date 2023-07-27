#include "lists.h"

/**
 * list_len - returns the number of lines to be linked
 * @h: pointer to list
 * Return: element number in the list
 */
size_t list_len(const list_t *h)
{
	size_t nbr = 0;
	const list_t *p = h;

	for (; p != NULL; p = p->next)
	{
		nbr++;
	}

	return (nbr);
}
