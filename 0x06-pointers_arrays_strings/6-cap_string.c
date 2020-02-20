#include "holberton.h"
/**
 * rev_string - Reverses strings.
 * @s: Variable which holds the string.
 *
 * Return: Always 0 (Success)
 */
char *cap_string(char *s)
{
	int i;
	/**int letra = 0;

	while(s[letra] != '\0')
	{
		letra++;
		}*/

	for(i=0; s[i]; i++)
	{
		if (s[i] == 44 ||  s[i] == 59 || s[i] == 46 || s[i] == 33)
		{
			s[i + 1] = s[i] + 32;
		}
		if (s[i] == 63 || s[i] == 34 || s[i] == 40 || s[i] == 41)
		{
			s[i + 1] = s[i] + 32;
		}
		if (s[i] == 123 || s[i] == 124 || s[i] == 32)
		{
			s[i + 1] = s[i] + 32;
		}
	}
	return (s);
}
