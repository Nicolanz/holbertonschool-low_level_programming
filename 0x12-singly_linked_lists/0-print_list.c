#include "lists.h"
/**
 * print_list - Prints Lists
 * @h: Header
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)");
		printf("\n");
		h = h->next;
		count++;
	}
	while (h != NULL)
	{
		printf("[%d] %s", h->len, h->str);
		printf("\n");
		h = h->next;
		count++;
	}
	return (count);
}
