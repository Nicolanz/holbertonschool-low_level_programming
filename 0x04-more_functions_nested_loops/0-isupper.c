#include "holberton.h"
/**
 * _isupper - checks if a letter is uppercase or lowercase.
 * @c: parameter to test the function.
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (c);
}
