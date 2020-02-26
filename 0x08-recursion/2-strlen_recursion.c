#include "holberton.h"
/**
 * _puts_recursion - Function to puts with recursion.
 * @s: Strings.
 * Return: Always 0 (Sucess)
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
	}
	return (*s);
}
