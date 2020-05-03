#include "lists.h"
/**
 * print_dlistint - Prints elements of a linked list
 * @h: header
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
		printf("\n");
	}
	return (count);
}
