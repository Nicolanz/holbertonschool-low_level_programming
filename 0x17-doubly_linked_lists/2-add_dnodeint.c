#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the begginig of a list
 * @head: Pointer to header
 * @n: Value
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
}
