#include "holberton.h"
/**
 * print_triangle  - Print the indicated trinagle.
 * @size: Number specified to draw the triangle.
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (i = size - 1; i >= 0; i--)
		{
			int b = i;
			int f;

			while (b > 0)
			{
				_putchar(' ');
				b--;
			}
			f = size - i;
			while (f > 0)
			{
				_putchar('#');
				f--;
			}
			_putchar('\n');
		}
	}
}
