#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes node at index
 * @head: Header
 * @index: position
 * Return: -1 or 1
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *position = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = position->next;
		free(position);
		return (1);
	}
	while (i < index - 1 && position != NULL)
	{
		position = position->next;
	}
	if (position == NULL || position->next == NULL)
	{
		return (-1);
	}
	free(position->next);
	position->next = position->next->next;
	return (1);
}
