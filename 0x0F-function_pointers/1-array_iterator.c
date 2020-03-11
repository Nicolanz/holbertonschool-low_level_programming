#ifnclude "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - Array iterator
 * @array: Array to iterate
 * @size: Size of array
 * @action: Pointer ti the function that will be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
