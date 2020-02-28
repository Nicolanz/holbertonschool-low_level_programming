#include "holberton.h"
/**
 * primo - Function to identify prime numbers.
 * @c: Value.
 * @i: iterator.
 * Return: Always 1 prime.
 */
int primo(int c, int i)
{
	if (i <= 1)
	{
		return (1);
	}
	else if (c % i == 0)
	{
		return (0);
	}
	return (primo(c, i - 1));
}
/**
 * is_prime_number - Funcion to return if a number is prime.
 * @n: Value.
 * Return: Alwais 1 if it is prime
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (primo(n, n - 1));
}
