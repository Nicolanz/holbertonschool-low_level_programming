#include "holberton.h"
/**
 * puts_half - print from .
 * @str: Variable which holds the string.
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int contador;
	int i;

	while (str[contador] != '\0')
	{
		contador++;
	}
	contador--;
	for (i = contador / 2 + 1; i <= contador; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
