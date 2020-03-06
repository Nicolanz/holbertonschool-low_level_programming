#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - Function to crate an array of intergers
 * @min: Min number of array
 * @max: Max number of array
 * Return: array.
 */
int *array_range(int min, int max)
{
	int *array;
	int cantidad = 0;
	int contador = 0;

	if (min > max)
	{
		return (NULL);
	}
	cantidad = max - min;
	cantidad++;
	array = malloc(sizeof(int) * cantidad);
	if (array == NULL)
	{
		return (NULL);
	}
	for (cantidad = min; cantidad <= max; cantidad++)
	{
		array[contador] = cantidad;
		contador++;
	}
	return (array);
}
