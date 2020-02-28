#include "holberton.h"
/**
 * _isalpha - check the code for lowercase or uppercase characters.
 * @c: variable which contains the value to test.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
