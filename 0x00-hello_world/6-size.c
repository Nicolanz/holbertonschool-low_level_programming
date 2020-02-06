#include <stdio.h>
#include <string.h>
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: 1 byte(s)\n");
	printf("Size of an int: 4 byte(s)\n");
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(long));
	printf("Size of a long long int: 8 byte(s)\n");
	printf("Size of a float: 4 byte(s)\n");
	return (0);
}
