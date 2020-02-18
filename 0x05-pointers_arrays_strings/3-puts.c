#include "holberton.h"
/**
 * reset_to_98 - update the value to 98.
 * @n: parameter to update.
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
        {
		_putchar(str[i]);
        }
	_putchar('\n');
}
