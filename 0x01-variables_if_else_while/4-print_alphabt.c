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
	char new;

	new = '\n';

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (!(abc == 'e' || abc == 'q'))
		{
			putchar(abc);
		}
	}
	putchar(new);
	return (0);
}
