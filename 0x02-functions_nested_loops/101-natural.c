#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int multiplo = i;
	int b = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0)
		{
			b += multiplo;
		}
	}
	printf("%d \n", b);
	return (0);
}
