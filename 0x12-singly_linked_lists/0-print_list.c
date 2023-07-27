#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to list_t
 *
 * Return: node number in list_t
 */
size_t print_list(const list_t *h)
{
	size_t nbr;
	const list_t *p = h;
	/*
	 * size_t len = h->len;
	 * const char *str = h->str;
	 */

	for (nbr = 0; p != NULL; nbr++, p = p->next)
	{
		if (p->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", p->len, p->str);
		}
	}
	return (nbr);
}
