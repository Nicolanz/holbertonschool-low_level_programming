#include "lists.h"
/**
 * pop_listint - Deletes the head's node
 * @head: head
 * Return: 0 || n value
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return ((*head)->n - 1);
	}
}
