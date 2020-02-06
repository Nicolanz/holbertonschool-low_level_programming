#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc;
	char upper;
	char new;

	new = '\n';

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		putchar(abc);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar(new);
	return (0);
}
