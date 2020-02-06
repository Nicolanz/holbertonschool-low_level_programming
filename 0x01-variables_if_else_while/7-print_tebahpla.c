#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int abc = 122;

	while (abc >= 97)
	{
		putchar(abc);
		abc--;
	}
	putchar('\n');
	return (0);
}
