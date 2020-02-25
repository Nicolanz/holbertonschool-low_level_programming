#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - Function that locates a substring.
 * @haystack: Variable which holds the string.
 * @needle: Second string to campare.
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int c;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (c = 0; needle[c] != '\0'; c++)
		{
			if (haystack[i + c] != needle[c])
			{
				break;
			}
		}
		if (needle[c] == '\0')
		{
			return (&haystack[i]);
		}
	}
	if (needle[0] == '\0')
	{
		return (haystack);
	}
	return (NULL);
}
