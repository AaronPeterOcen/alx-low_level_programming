#include "lists.h"

/**
 * free_list - frees the list_t list
 * @head: pointer to list head
 */
void free_list(list_t *head)
{
	list_t *curr = head;
	list_t d;

	while (curr != NULL)
	{
		d = curr->next;
		free(curr->str);
		free(curr);
		curr = d;
	}
}
