#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: Number of arguments in the command line
 * @argv: String of arguments in the command line
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;
	int c = 0;
	int b;

	for (i = 1; i < argc; i++)
	{
		for (b = 0; argv[i][b]; b++)
		{
			if (!(argv[i][b] <= '9' && argv[i][b] >= '0'))
			{
				printf("Error\n");
				return (1);
			}
		}
		c += atoi(argv[i]);
	}
	printf("%d\n", c);
	return (0);
}
