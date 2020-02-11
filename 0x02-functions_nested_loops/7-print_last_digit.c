#include "holberton.h"
/**
 * print_last_digit - Print the last digit of a number.
 * @c: Gets the value.
 *
 * Return: Always 0.
 */
int print_last_digit(int c)
{
	c = c % 10;
	if (c > 0)
	{
		c = c * 0;
	}
	else if (c < 0)
	{
		c = c * -1;
	}
	return (c);
}
