#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print everything
 * @format: List of arguments
 *
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *string;
	int i = 0;

	va_start(list, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 's':
			string = va_arg(list, char *);
			if (string == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
			break;
		case 'f':
			printf("%f", va_arg(list, double));
		}
		if ((format[i] == 'c' || format[i] == 'f' || format[i] == 's'
		     || format[i] == 'i') && format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
