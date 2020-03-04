#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 *
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int b;

	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (i = 0; i < width; i++)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			array[i][b] = 0;
		}
	}
	return (array);
}
