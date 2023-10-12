#include "lists.h"

/**
 * dlistint_len - returns number of elements in a ll
 * @h: pointer vars
 * Return: 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counts = 0;

	while (h != NULL)
	{
		h = h->next;
		counts++;
	}
	return (counts);
}
