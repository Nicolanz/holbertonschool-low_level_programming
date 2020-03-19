#include "lists.h"
/**
 * print_list - Prints Lists
 * @h: Header
 * return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == h->next)
	{
		printf("[0] (nil)");
	}
	else
	{
		while (h != NULL)
		{
			printf("[%d] %s", h->len, h->str);
			h = h->next;
			count++;
			printf("\n");
		}
	}
	return (count);
}
