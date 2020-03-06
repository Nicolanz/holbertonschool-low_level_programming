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
	int cantidad;
	int contador = 0;

	if (min > max)
	{
		return (NULL);
	}
	cantidad = max - min;
	array = malloc(sizeof(int) * cantidad + 1);
	for (i = contador; i <= max; i++)
	{
		array[contador] = i;
		contador++;
	}
	return (array);
}
