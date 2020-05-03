#include "lists.h"
/**
 * sum_dlistint - Sums the value of al the nodes
 * @head: header
 * Return: count
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (head != NULL)
		{
			count += head->n;
			head = head->next;
		}
		return (count);
	}
}
