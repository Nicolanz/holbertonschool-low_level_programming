#include "holberton.h"
/**
 * cap_string - Capitalizes strings.
 * @s: Variable which holds the string.
 *
 * Return: Always 0 (Success)
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i + 1] >= 97 && s[i + 1] <= 122)
		{
			if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',')
			{
				s[i + 1] = s[i + 1] - 32;
			}
			if (s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?')
			{
				s[i + 1] = s[i + 1] - 32;
			}
			if (s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
