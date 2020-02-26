#include "holberton.h"
/**
 * _puts_recursion - Function to puts with recursion.
 * @s: Strings.
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	if (s[i] != '\0')
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
