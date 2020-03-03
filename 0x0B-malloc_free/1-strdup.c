#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - Copies a string into a variable and returns a pointer
 * @str: String
 *
 * Return: copy
*/
char *_strdup(char *str)
{
	char *copy;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	copy = malloc(sizeof(char) * i);
	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}
