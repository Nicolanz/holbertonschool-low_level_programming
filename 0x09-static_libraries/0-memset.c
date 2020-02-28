#include "holberton.h"
/**
 * _memset - Function to fill a variable with a constant.
 * @s: Variable which holds the string.
 * @b: Variable to replace.
 * @n: number of times it is repeated.
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
