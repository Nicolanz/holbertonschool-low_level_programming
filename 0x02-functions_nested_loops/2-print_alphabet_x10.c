#include "holberton.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int a;
	int contador;

	for (contador = 1; contador <= 10; contador++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
