#include "lists.h"
/**
 * free_listint2 - Frees list
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
