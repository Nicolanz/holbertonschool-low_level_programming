#include "holberton.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: Variable which will hold the string.
 * @src: Variable which holds the other string.
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int contador = 0;

	while (dest[contador] != '\0')
	{
		contador++;
	}
	while (src[i] != '\0')
	{
		dest[contador] += src[i];
		contador++;
		i++;
	}
	dest[contador] = '\0';
	return (dest);
}
