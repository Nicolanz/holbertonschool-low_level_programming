#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Functiond to return a pointer to allocated memory
 * @b: Value
 * Return: ptr
 *
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
		free(ptr);
	}
	return (ptr);
}
