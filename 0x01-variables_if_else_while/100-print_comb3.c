#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int c = 48;
	int contador;

	for (contador = 0; contador <= 99; contador++)
	{
		if (!(c >= i))
		{
			putchar(c);
			putchar(i);
			if (contador != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (i == 57)
		{
			i = 47;
			c++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
