#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates Strings.
 * @s1: String 1
 * @s2: String 2
 * Return: s
 *
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int b;
	char *s;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1 && s1[i]; i++)
	{
	}
	for (b = 0; s2 && s2[b]; b++)
	{
	}
	s = malloc((i + b) * sizeof(char));
	if (s1 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] && s1[i]; i++)
	{
		s[i] = s1[i];
	}
	for (b = 0; s2 && s2[b]; b++)
	{
		s[i] += s2[b];
		i++;
	}
	return (s);

}
