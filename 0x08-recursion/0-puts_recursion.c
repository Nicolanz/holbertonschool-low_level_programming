#include "holberton.h"
/**
 * _puts_recursion - Function to puts with recursion.
 * @s: Strings.
 * Return: Always 0 (Sucess)
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
