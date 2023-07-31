#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 * @h: pointer to the listint
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;
	const listint_t *curr = h;

	for (; curr != NULL; curr = curr->next)
	{
		printf("%d\n", curr->n);
		number++;
	}
	return (number);
}
