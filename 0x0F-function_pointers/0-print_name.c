#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Print name
 * @name: Name to print
 * @f: Pointer function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
