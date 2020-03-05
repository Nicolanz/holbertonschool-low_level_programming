#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - Concatenates string s1 followed by n bytes of string 2
 * @s1: String 1
 * @s2: String 2
 * @n: number of bytes
 *
 * Return: Pointer to concatenated array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int b;
	char *array;

	for (i = 0; s1 && s1[i]; i++)
	{
	}
	for (b = 0; s2 && s2[b]; b++)
	{
	}
	array = malloc((i + b + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1 && s1[i]; i++)
	{
		array[i] = s1[i];
	}
	if (n >= b)
	{
		for (b = 0; s2 && s2[b]; b++)
		{
			array[i] = s2[b];
			i++;
		}
	}
	else
	{
		for (b = 0; s2 && b < n; b++)
		{
			array[i] = s2[b];
			i++;
		}
	}
	array[i] = '\0';
	return (array);
}
