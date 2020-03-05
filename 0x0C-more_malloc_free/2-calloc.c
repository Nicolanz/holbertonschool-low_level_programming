#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Function to emulate calloc function
 * @nmemb: Number of elements.
 * @size: Size of array.
 * Return: array
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; array[i]; i++)
	{
		array[i] = 0;
	}
	return (array);
}
