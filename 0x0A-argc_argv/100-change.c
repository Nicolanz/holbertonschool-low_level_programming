#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	int c;
	int i;

	c = atoi(argv[1]);
	for (i = 0; c >= 0; i++)
	{
		if (c >= 25)
		{
			c = c - 25;
		}
		else if (c >= 10)
		{
			c = c - 10;
		}
		else if (c >= 5)
		{
			c = c - 5;
		}
		else if (c >= 2)
		{
			c = c - 2;
		}
		else if (c >= 1)
		{
			c = c - 1;
			break;
		}
	}
	printf("%d", i);
	return (0);
}
