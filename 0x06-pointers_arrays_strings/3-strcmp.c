#include "holberton.h"
/**
 * _strcmp - compares two arrays.
 * @s1: Variable which will hold the values.
 * @s2: Variable which holds the other values.
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int total;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			total = s1[i] - s2[i];
			break;
			return (total);
		}
	}
	return (s1[i] - s2[i]);
}
