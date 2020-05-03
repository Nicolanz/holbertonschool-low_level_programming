#include "lists.h"
/**
 * add_dnodeint_end - Adds node at the end of a linked list
 * @head: Pointer to header
 * @n: Value
 * Return: newnode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *last = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		if (*head == NULL)
		{
			*head = newnode;
			newnode->prev = NULL;
			newnode->next = NULL;
			return (*head);
		}
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newnode;
		newnode->prev = last;
		newnode->next = NULL;
		return (newnode);
	}
}
