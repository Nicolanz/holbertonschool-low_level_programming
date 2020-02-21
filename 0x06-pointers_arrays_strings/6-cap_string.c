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
		if (s[i - 1] == 32 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		else if (s[i - 1] == '\t')
		{
			s[i - 1] = 32;
			s[i] = s[i] - 32;
		}
		else if (s[i - 1] == '\n')
		{
			s[i] = s[i] - 32;
		}
		else if (s[i] == 46 && s[i + 1] == 104)
		{
			s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
