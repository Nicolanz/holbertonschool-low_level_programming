#include "holberton.h"
#include <stdio.h>
/**
 * set_string - Function that sets the value of a pointer to a char.
 * @s: Variable which will change.
 * @to: Variable which changes the s variable
 * Return: Always 0 (Success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
