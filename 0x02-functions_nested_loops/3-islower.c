#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 65 && c <= 80)
	{
		_putchar('0');
	}
	else if (c >= 97 && c <= 122)
	{
		_putchar('1');
	}
	_putchar('\n');
	return (c);
}
