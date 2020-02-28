#include "holberton.h"
/**
 * _memcpy - Function to fill a variable with a constant.
 * @dest: Variable which holds the string.
 * @src: Variable which replaces.
 * @n: number of times it is repeated.
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
