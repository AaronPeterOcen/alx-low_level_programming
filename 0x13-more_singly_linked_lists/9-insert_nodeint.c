#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: list head
 * @idx: index of the list where the node is
 * @n: integer element
 *
 * Return: address of the new node, NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *h;
	unsigned int i = 0;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		if (idx > 0)
		{
			for (h = *head; h; i++)
			{
				if (i == idx)
				{
					new->next = h->next;
					h->next = new;
					return (new);
				}
				h = h->next;
			}
			if (idx > i)
				return (NULL);
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	return (NULL);
}
