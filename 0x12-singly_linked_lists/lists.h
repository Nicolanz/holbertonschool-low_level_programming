#ifndef HOLBERTON
#define HOLBERTON

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int _putchar(char c);
/**
 * struct list_s - Struct of linked lists
 * @str: string
 * @len: Lenght
 * @next: Takes the next one
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
#endif /*HOLBERTON*/
