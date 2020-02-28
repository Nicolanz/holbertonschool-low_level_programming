#include "holberton.h"
/**
 * _strspn - Function to compare the number of chars between 2 chars.
 * @s: Variable which holds the string.
 * @accept: Variable which holds the other string.
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int c = 0;
	int contador = 0;

	for (i = 0; s[i]; i++)
	{
		c = 0;

		while (accept[c] != '\0')
		{
			if (s[i] == accept[c])
			{
				contador++;
				break;
			}
			c++;
		}
		if (accept[c] == '\0' && accept[c] != s[i])
		{
			break;
			return (contador);
		}
	}
	return (contador);
}
