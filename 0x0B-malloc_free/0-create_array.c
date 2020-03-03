#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates an array wtih a specific size.
 * @size: Size of array
 * @c: Value of size
 *
 * Return: Array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
}
