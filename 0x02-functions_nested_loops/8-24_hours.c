#include "holberton.h"
/**
 * jack_bauer - Print the minutes and hours of that song.
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int a;
	int uno = 48;
	int dos = 48;
	int tres = 48;
	int cuatro = 48;

	for (a = 0; a < 1440; a++)
	{
		_putchar(cuatro);
		_putchar(tres);
		_putchar(58);
		_putchar(dos);
		_putchar(uno);
		_putchar('\n');

		if (uno == 57)
		{
			uno = 47;
			dos++;
		}
		if (dos == 54 && uno == 47)
		{
			dos = 48;
			tres++;
		}
		if (tres == 58 && dos == 48 && uno == 47)
		{
			tres = 48;
			cuatro++;
		}
		uno++;
	}
}
