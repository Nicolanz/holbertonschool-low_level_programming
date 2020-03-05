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

	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
