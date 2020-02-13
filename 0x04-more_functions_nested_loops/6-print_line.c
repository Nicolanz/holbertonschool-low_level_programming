#include "holberton.h"
/**
 * print_line  - Print _ the number of lines specied.
 * @n: Parameter to count the number of times thatn the i variable is repeated.
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
