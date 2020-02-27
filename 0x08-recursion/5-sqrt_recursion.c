#include "holberton.h"
/**
 * recursion - Function with has the recursion.
 * _sqrt_recursion - Function to get the root square of a number.
 *
 * @n: Number to get the square root.
 * @i: Iterator.
 * Return: Always 0 (Sucess)
 */
int recursion(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
		return (recursion(i + 1, n));
}
/**
 * _sqrt_recursion - Function to get the root square of a number.
 * @n: Number to get the square root.
 * Return: Always 0 (Sucess)
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (recursion(i, n));
}
