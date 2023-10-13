#include "lists.h"

/**
 * add_dnodeint - Adds a new element at the begining of the list
 *
 * @head: A pointer that points to another pointer which inturn
 * points to the head of the list.
 *
 * @n: The element to be added
 *
 * Return: The address of the new element, or NULL if it failed
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn = malloc(sizeof(dlistint_t));

	if (nn == NULL)
		return (NULL);
	nn->n = n;
	nn->prev = NULL;
	nn->next = *head;

	if (*head != NULL)
		(*head)->prev = nn;
	*head = nn;

	return (*head);
}
