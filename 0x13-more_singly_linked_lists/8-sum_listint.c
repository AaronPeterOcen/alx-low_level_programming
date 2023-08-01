#include "lists.h"

/**
 * sum_listint - returns the sum of all the data n of the listint list
 * @head: pointer to head of the list
 *
 * Return: sum of all the data n of the list, 0 otherwise
 */
int sum_listint(listint_t *head)
{
	listint_t *i = head;
	int sum = 0;

	/*i = head;*/
	for (; i != NULL; i = i->next)
	{
		sum += i->n;
	}
	return (sum);
}
