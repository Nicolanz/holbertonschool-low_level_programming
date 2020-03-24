#include "lists.h"
/**
 * free_listint2 - Frees list
 * @head: head
 */
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *temp = *head;
		*head = temp->next;
		free(temp);
	}
}
