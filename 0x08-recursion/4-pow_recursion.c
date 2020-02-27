#include "holberton.h"
/**
 * _pow_recursion - Function to get the pow if a number.
 * @x: Frist Number.
 * @y: Second Number.
 * Return: Always 0 (Sucess)
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
