#include "holberton.h"
/**
 * _strcmp - compares two arrays.
 * @s1: Variable which will hold the values.
 * @s2: Variable which holds the other values.
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int contadorS1 = 0;
	int contadorS2 = 0;
	int total1 = 0;
	int total2 = 0;

	while (s1[contadorS1] != '\0')
	{
		contadorS1++;
	}
	while (s2[contadorS2] != '\0')
	{
		contadorS2++;
	}
	for (i = 0; i <= s1[contadorS1]; i++)
	{
		total1 += s1[i];
	}
	for (i = 0; i <= s2[contadorS2]; i++)
	{
		total2 += s2[i];
	}
	total1 = total1 - total2;
	return (total1);
}
