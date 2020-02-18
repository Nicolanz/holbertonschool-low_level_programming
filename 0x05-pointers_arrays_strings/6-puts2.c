#include "holberton.h"
/**
 * puts2 - print strings in par position.
 * @str: Variable which holds the string.
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int contador = 0;
	int i;

	while (str[contador] != 0)
	{
		contador++;
	}
	/**
	 *for (i = 0; i <= contador; i++)
	 *{
	 *	if (i % 2 == 0)
	 *	{
	 *		_putchar(str[i]);
	 *      }
	 *}
	*/
	for (i = 0; i <= contador; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
