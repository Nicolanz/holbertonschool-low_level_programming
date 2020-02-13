#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98  - Print the numbers from n to 98.
 * @n: Parameter to count the number.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int contador;

	if (n <= 98)
	{
		for (contador = n; contador <= 98; contador++)
		{
			printf("%d", contador);
			if (!(contador == 98))
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	else if (n >= 98)
	{
		for (contador = n; contador >= 98; contador--)
		{
			printf("%d", contador);
			if (!(contador == 98))
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
