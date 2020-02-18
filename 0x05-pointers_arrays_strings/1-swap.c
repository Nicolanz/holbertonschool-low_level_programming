#include "holberton.h"
/**
 * swap_int - update the value to 98.
 * @a: parameter to swap.
 * @b: Parameter to swap.
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
