#include "holberton.h"
#include <stdio.h>
/**
 * size - Function to get yhe size of a string
 * @s: Strings.
 * Return: Always 0 (Sucess)
 */
int size(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + size(s));
	}
	return (0);
}
/**
 * palindromo - Detects palindrome values.
 * @p1: String.
 * @p2: String with pointer in the last digit.
 * Return: Always 0 (Sucess)
 */
int palindromo(char *p1, char *p2)
{
	if (*(p1 + 1) == '\0')
	{
		return (1);
	}
	if (*p1 == *p2)
	{
		return (palindromo(p1 + 1, p2 - 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - Return if a string is palindrome.
 * @s: Strings.
 * Return: palindrome values.
 */
int is_palindrome(char *s)
{
	int c = 0;

	c = size(s);
	c--;
	return (palindromo(s, s + c));
}
