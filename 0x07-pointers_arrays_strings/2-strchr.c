#include "holberton.h"
/**
 * _strchr - Function to return a pointer to the character specified.
 * @s: Variable which holds the string.
 * @c: Character.
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c; i++)
	{
	}
	return (s + i);
}
