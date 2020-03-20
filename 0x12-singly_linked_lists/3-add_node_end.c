#include "lists.h"
/**
 * add_node_end - Add node at the end
 * @head: Pointer to head
 * @str: Pointer to string
 * Return: newnode
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *newnode;
	list_t *last = *head;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	newnode->len = i;
	newnode->str = strdup(str);
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newnode;
	return (newnode);
}
