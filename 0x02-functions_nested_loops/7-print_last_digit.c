#include "holberton.h"
/**
 * print_last_digit - Print the last digit of a number.
 * @c: Gets the value.
 *
 * Return: Always 0.
 */
int print_last_digit(int c)
{
	int lastDigit = c % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar (lastDigit + '0');
	return (lastDigit);
}
