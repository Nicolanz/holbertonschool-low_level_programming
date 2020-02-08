#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int contador;
	int probemos;
	int uno = 48;
	int dos = 48;
	int tres = 48;

	for (contador = 0; contador <= 800; contador++)
	{
		if (!(uno == dos || uno == tres || dos == tres || dos >= uno || tres >= dos))
		{
			putchar(tres);
			putchar(dos);
			putchar(uno);
			if (!(uno == 57 && dos == 56 && tres == 55))
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (uno == 57)
		{
			uno = 47;
			dos++;
		}
		if ((uno == 47) && (dos == 58))
		{
			tres++;
			dos = 48;
		}
		uno++;
	}
	putchar('\n');
}
