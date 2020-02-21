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

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] < 'a' || s[i] > 'z') && (s[i + 1] >= 97 && s[i + 1] <= 122))
		{
			if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
			    || s[i] == ',' || s[i] == ';'
			    || s[i] == '.' || s[i] == '!'
			    || s[i] == '?' || s[i] == '"'
			    || s[i] == '(' || s[i] == ')'
			    || s[i] == '{' || s[i] == '}')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		else if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
