#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: Number of arguments in the command line
 * @argv: String of arrays in the command line.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
