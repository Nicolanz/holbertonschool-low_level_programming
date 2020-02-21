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
		if ((s[i] == 32 || s[i] == '\t') && (s[i + 1] >= 97 && s[i + 1] <= 122))
		{
			s[i+1] = s[i+1] - 32;
		}
		else if ((s[i] == '\n' || s[i] == 44 || s[i] == 59 ) && (s[i + 1] >= 97 && s[i + 1] <= 122))
                {
                        s[i+1] = s[i+1] - 32;
                }
		else if ((s[i] == 46 || s[i] == 33 || s[i] == 63 || s[i] == 125) && (s[i + 1] >= 97 && s[i + 1] <= 122))
                {
                        s[i+1] = s[i+1] - 32;
                }
		if ((s[i] == 34 || s[i] == 40 || s[i] == 41 || s[i] == 123) && (s[i + 1] >= 97 && s[i + 1] <= 122))
                {
                        s[i+1] = s[i+1] - 32;
                }
	}
	return (s);
}
