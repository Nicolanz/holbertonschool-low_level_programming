#include "search_algos.h"
/**
 * linear_search - Finds value with Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: Size of the array
 * @value: value to find
 * Return: idx if suceed or 0 if fails
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (*array == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, *array);
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", i, *array);
			array++;
		}
	}
	return (-1);
}