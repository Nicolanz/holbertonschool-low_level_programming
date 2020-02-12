#include "holberton.h"
/**
 * times_table  - Print the 9 table.
 * Return: Always 0.
 */
void times_table(void)
{
	int contador;
	int numero;

	for (contador = 0; contador <= 9; contador++)
	{
		for (numero = 0; numero <= 9; numero++)
		{
			int entero = numero * contador;

			if (entero > 9)
			{
				_putchar((entero / 10) + '0');
				_putchar((entero % 10) + '0');
				if (!(numero == 9))
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (!(numero == 0))
				{
					_putchar(' ');
				}
				_putchar((entero % 10) + '0');
				if (!(numero == 9))
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}
}
