#include "lists.h"
/**
 * dlistint_len - Finds the number of elements nn a linked list
 * @h: header
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
