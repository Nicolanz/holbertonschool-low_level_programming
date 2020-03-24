#include "lists.h"
/**
 * add_nodeint_end - Adds node at the end.
 * @n: Number
 * @head: head;
 * Return: newnode;
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *last = *head;

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
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newnode;
	return (newnode);
}
