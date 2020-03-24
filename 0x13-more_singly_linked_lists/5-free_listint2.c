#include "lists.h"
/**
 * free_listint2 - Frees list
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temp = *head;
		free(temp);
		*head = temp->next;
	}
}
