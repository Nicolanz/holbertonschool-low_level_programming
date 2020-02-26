#include "holberton.h"
/**
 * _memset - Function to fill a variable with a constant.
 * @s: Variable which holds the string.
 * @b: Variable to replace.
 * @n: number of times it is repeated.
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
