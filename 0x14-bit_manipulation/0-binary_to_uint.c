#include "holberton.h"
/**
 * power - Function to get the power of a number
 * @numero: Number
 * @potencia: Potencia
 * Return: pow
 */
int power(int numero, int potencia)
{
	int i;
	int pow = 1;

	for (i = potencia; i > 0; i--)
	{
		pow *= numero;
		potencia--;
	}
	return (pow);
}
/**
 * binary_to_uint - Converts binary to int
 * @b: Char of binary
 * Return: result
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int i, c = 0, pow = 0, potencia;
	unsigned int binary, result = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
	}
	i--;
	potencia = i;
	while (c <= i)
	{
		binary = b[c] - 48;
		if (!(binary == 1 || binary == 0))
		{
			return (0);
		}
		pow = power(2, potencia);
		result += binary * pow;
		potencia--;
		c++;
	}
	return (result);
}
