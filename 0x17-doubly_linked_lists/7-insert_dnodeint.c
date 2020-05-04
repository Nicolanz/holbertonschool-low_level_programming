#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts node at Index
 * @h: header
 * @idx: index
 * @n: value
 * Return: newnode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *position = *h;
	dlistint_t *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		if (*h == NULL)
		{
			*h = newnode;
			return (*h);
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
		newnode->next = position->prev->next;
		position->prev->next = newnode;
		newnode->prev = position->prev;
		if (!(newnode->next == NULL))
		{
			newnode->next->prev = newnode;
		}
		return (newnode);
	}
}
