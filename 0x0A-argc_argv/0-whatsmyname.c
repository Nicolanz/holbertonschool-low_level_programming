#include "holberton.h"
#include <stdio.h>
/**
 * main - Function to print the number of arguments in the command line.
 * @argc: Unused variable.
 * @argv: Array of arguments in the command line
 *
 * Return: Always 0.
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
