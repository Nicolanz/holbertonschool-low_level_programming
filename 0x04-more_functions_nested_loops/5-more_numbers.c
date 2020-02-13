#include "holberton.h"
/**
 * more_numbers - Print the numbers from 0 to 14, 14 times.
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (!(x < 10))
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
