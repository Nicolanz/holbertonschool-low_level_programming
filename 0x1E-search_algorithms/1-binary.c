#include "search_algos.h"
/**
 * printIt - Prints an array
 * @array: pointer to the first element of the array
 * @end: pointer to the last element of the array
 *
 */
void printIt(int *array, int *end)
{
	printf("Searching in array: ");
	while (array < end)
	{
		printf("%d, ", *array);
		array++;
	}
	printf("%d\n", *array);

}
/**
 * binary_search - Finds a value in a sorted array. Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: Size of the array
 * @value: value to find
 * Return: idx if suceed or -1 if fails
 *
 */
int binary_search(int *array, size_t size, int value)
{
	int *end = (int *)(&array[size - 1]);
	int *mid;

	while (array <= end)
	{
		printIt(array, end);
		mid = array + ((end - array) / 2);
		if (*mid == value)
		{
			return (*mid);
		}
		else if (value < *mid)
		{
			end = mid - 1;
		}
		else
		{
			array = mid + 1;
		}
	}
	return (-1);
}
