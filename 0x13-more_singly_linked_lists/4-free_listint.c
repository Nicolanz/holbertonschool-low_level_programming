#include "lists.h"
/**
 * free_listint - Frees list
 * @head: head;
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
