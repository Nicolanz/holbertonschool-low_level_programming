#include "lists.h"
/**
 * free_list - Frees liked lists
 * @head: pointer to head
 *
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
