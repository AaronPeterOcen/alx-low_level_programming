#include "lists.h"

/**
 * free_dlistint - frees lisst
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cn = head;
	dlistint_t *nn;

	while (cn != NULL)
	{
		nn = cn->next;
		free(cn);
		cn = nn;
	}
}
