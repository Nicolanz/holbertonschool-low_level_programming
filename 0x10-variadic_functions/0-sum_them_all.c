#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Sum the arguments given
 * @n: Number of arguments
 * Return: sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum  = 0;
	va_list arguments;

	if (n == 0)
	{
		return (0);
	}

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, int);
	}
	va_end(arguments);
	return (sum);
}
