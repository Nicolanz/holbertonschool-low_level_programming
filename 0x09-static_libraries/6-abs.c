#include "holberton.h"
/**
 * _abs - Print the absolute value of an int.
 * @c: Int to evalute.
 * Return: Always 0.
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	else if (c > 0 || c == 0)
	{
		c = c * 1;
	}
	return (c);
}
