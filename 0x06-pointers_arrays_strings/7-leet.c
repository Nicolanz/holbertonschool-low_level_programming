#include "holberton.h"
/**
 * leet - Function to encode in 1337
 * @s: Variable which holds the string.
 *
 * Return: Always 0 (Success)
 */
char *leet(char *s)
{
	char letter[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char number[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int i;
	int c;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; letter[c] != '\0'; c++)
		{
			if (s[i] == letter[c])
			{
				s[i] = number[c];
			}
		}
	}
	return (s);
}
