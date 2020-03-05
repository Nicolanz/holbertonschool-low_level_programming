#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Return the minimum of coins to make change
 * @argc: Number of elements in the command line.
 * @argv: Array of stings of the arguments in the command line
 * Return: 0
 *
*/
int main(int argc, char *argv[])
{
	int c;
	int contador = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	while (c > 0)
	{
		if (c >= 25)
		{
			c -= 25;
			contador++;
		}
		else if (c >= 10 && c < 25)
		{
			c -= 10;
			contador++;
		}
		else if (c >= 5 && c < 10 && c < 25)
		{
			c -= 5;
			contador++;
		}
		else if (c >= 2 && c < 5 && c < 10 && c < 25)
		{
			c -= 2;
			contador++;
		}
		else if (c >= 1 && c < 2 && c < 5 && c < 10 && c < 25)
		{
			c -= 1;
			contador++;
		}
	}
	printf("%d\n", contador);
	return (0);
}
