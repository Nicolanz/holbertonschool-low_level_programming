#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numeros = 48;

	while (numeros <= 57)
	{
		putchar(numeros);
		if (numeros < 57)
		{
			putchar(',');
			putchar(' ');
		}
		numeros++;
	}
	putchar('\n');
	return (0);
}
