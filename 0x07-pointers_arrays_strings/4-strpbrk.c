#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - Returns a pointer to the chars which matches.
 * @s: Character to value.
 * @accept: character to value.
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int c;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; accept[c]; c++)
		{
			if (s[i] == accept[c])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
