#include "lists.h"
/**
 * insert_nodeint_at_index - Insert node in a given position.
 * @head: head
 * @idx: position
 * @n: Value
 * Return: newnode or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *position = *head;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	while (i != idx)
	{
		position = position->next;
		i++;
	}
	if (position->next == NULL)
	{
		return (NULL);
	}
	newnode->next = position->next;
	position->next = newnode;
	return (newnode);
}
