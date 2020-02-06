#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 48;
	int second = 97;

	while (first <= 57)
	{
		putchar(first);
		first++;
	}
	while (second <= 102)
	{
		putchar(second);
		second++;
	}
	putchar('\n');
	return (0);
}
