#include "holberton.h"
/**
 * _islower - Checks is a letter lowercase.
 * @c: check if c variable is lowercase.
 *
 * Return: Always 0 0r 1.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
