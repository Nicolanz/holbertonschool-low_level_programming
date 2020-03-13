#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *
 *
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i = 0;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
	       	printf("%s", va_arg(arguments, char *));

		if (i != n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
