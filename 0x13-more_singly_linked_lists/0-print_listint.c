#include "lists.h"
/**
 * print_listint - Prints list elements.
 * @h: header.
 * Return: Size.
 */
size_t print_listint(const listint_t *h)
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
