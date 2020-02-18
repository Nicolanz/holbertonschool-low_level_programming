#include "holberton.h"
/**
 * rev_string - Reverses strings.
 * @s: Variable which holds the string.
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int i;
	int size = 0;
	char reves[10000];

	while (s[size] != '\0')
	{
		size++;
	}
	size--;
	for (i = 0; i <= size; i++)
	{
		reves[i] = s[size - i];
	}
	for (i = 0; i <= size; i++)
	{
		s[i] = reves[i];
	}
}
