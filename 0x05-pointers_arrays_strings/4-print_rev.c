#include "holberton.h"
/**
 * print_rev - print strings in reverse.
 * @s: Variable which holds the string.
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int cuenta;
	int i;

	while (s[cuenta] != 0)
	{
		cuenta++;
	}
	for (i = cuenta - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
