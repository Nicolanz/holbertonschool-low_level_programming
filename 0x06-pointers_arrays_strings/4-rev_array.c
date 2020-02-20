#include "holberton.h"
/**
 * reverse_array - Reverses Arrays.
 * @a: Variable which will hold the string.
 * @n: Variable which holds the number where string will be taken.
 *
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int array[10000];
	int i;
	int size = n - 1;

	for (i = 0; i < n; i++)
	{
		array[size] = a[i];
		size--;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = array[i];
	}
}
