#include "holberton.h"
/**
 * _strcpy - assign a sting to a declared variable.
 * @dest: Variable which will hold the string.
 * @src: Variable which holds the string.
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
