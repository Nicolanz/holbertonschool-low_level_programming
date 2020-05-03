#include "lists.h"
/**
 * free_dlistint - Frees linked list
 * @head: header
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
