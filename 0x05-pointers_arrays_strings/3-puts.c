#include "holberton.h"
/**
 * _puts - print strings.
 * @str: Variable which holds the string.
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
