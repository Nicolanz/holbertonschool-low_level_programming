#include "holberton.h"
/**
 * print_diagonal  - Print the 9 table.
 * @n: Parameter to evaluate.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 0; i < n ; i++)
		{
			int b;

			for (b = 0; b < i; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
