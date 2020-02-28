#include "holberton.h"
/**
 * _strncpy - Copie one string into another.
 * @dest: Variable which will hold the string.
 * @src: Variable which holds the other string.
 * @n: Variable which sets the number of characters which will be copied
 *
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
