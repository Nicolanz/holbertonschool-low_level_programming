#include "holberton.h"
/**
 * factorial - Function to return the factorial of a number.
 * @n: Number.
 * Return: Always 0 (Sucess)
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n <= -1)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
