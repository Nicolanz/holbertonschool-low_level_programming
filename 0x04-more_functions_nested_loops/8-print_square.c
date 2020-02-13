#include "holberton.h"
/**
 * print_square - Print the 9 table.
 * @size: Size to print columns and files.
 * Return: Always 0.
 */
void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		int b;

		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
