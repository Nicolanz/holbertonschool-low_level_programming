#include "lists.h"
/**
 * pop_listint - Deletes the head's node
 * @head: head
 * Return: 0 || n value
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number = (*head)->n;

	if ((*head)->next == NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (0);
	}
	else
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (number);
	}
}
