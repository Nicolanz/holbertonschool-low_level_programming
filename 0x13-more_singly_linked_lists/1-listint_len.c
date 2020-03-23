#include "lists.h"
/**
 * listint_len - Returns the lenght of a list
 * @h: header
 * Return: Size.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
