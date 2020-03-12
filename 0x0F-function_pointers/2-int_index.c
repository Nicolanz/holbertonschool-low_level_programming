#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Searches for intergers
 * @cmp: Pointer to function
 * @array: Array to iterate
 * @size: Size of the array
 * Return: index(i)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int b = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		b = cmp(array[i]);
		if (b != 0)
		{
			break;
		}
	}
	if (size == i || b == 0)
	{
		return (-1);
	}
	return (i);

}
