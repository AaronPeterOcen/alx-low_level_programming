#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to list_t
 *
 * Return: node number in list_t
 */
size_t print_list(const list_t *h)
{
	size_t nbr = 0;
	const list_t *p = h->next;
	/*
	 * size_t len = h->len;
	 * const char *str = h->str;
	 */

	for (; h != NULL; nbr++, h = p)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
	}
	return (nbr);
}
