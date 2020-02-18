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
	for (i = 5; i < contador; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
