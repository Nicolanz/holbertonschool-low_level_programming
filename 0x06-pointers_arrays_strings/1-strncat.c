#include "holberton.h"
/**
 * _strncat - Concatenates two strings until n position.
 * @dest: Variable which will hold the string.
 * @src: Variable which holds the other string.
 * @n: Variable where the array will end.
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int contador = 0;

	while (dest[contador] != '\0')
	{
		contador++;
	}
	while (src[i] != src[n])
	{
		dest[contador] += src[i];
		contador++;
		i++;
	}
	dest[contador] = '\0';
	return (dest);
}
