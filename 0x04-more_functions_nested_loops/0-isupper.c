#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else if (c >= 97 && c<= 122)
	{
		return (1);
	}
	return (c);
}
