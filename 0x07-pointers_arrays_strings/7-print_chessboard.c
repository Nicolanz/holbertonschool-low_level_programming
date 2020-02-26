#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - Function that prints the chessboard.
 * @a: Variable which holds the 2D array.
 *
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int c;

	for (i = 0; i < 8; i++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[i][c]);
		}
		_putchar('\n');
	}
}
