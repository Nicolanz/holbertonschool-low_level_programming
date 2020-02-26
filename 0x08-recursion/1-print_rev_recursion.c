#include "holberton.h"
/**
 * _print_rev_recursion - Function to prints a string in reverse.
 * @s: Strings.
 * Return: Always 0 (Sucess)
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
