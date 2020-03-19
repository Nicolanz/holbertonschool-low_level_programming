#include "lists.h"
/**
 * list_len - Return the number of nodes
 * @h: Header
 * Return: count of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			if (h->str != NULL)
			{
				h = h->next;
				count++;
			}
			else
			{
				h = h->next;
				count++;
			}
		}
	}
	return (count);
}
