#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - Function to crate an array of intergers
 * @min: Min number of array
 * @max: Max number of arrays
 * Return: array.
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{}
	array = malloc(i * sizeof(int));
	for (i = min; i <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
