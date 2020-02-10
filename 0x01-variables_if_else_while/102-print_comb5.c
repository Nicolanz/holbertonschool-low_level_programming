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
	int uno = "1";
	int dos = "0";
	int tres = "0";
	int cuatro = "0";

	int primero =  uno += dos;
	int segundo = tres += cuatro;

	for(contador = 0; contador <= 9999; contador++)
	{
		
		if(!(segundo >= primero || dos > uno || cuatro > tres))
		{
			putchar(cuatro);
			putchar(tres);
			putchar(' ');
			putchar(dos);
			putchar(uno);
			putchar(',');
			putchar(' ');
		}
		
		if (uno == 9)
		{
			uno = -1;
			dos++;
		}
		if(dos == 10 && uno == -1)
		{
			tres++;
			dos = 0;
		}
		if(tres == 10 && dos == 0 && uno == -1)
		{
			cuatro++;
			tres = 48;
		}
		uno ++;
		
	}
	putchar('\n');
	return (0);
}
