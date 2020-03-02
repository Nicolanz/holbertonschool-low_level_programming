#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: Number of elements in the command line
 * @argv: Array of string in the command line
 * Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int i;
	int c = 1;

	for (i = 1; i < argc; i++)
	{
		c *= atoi(argv[i]);
	}
	if (i <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", c);
		return (0);
	}
}
