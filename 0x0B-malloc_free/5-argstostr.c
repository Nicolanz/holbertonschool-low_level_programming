#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 */
int contador (int ac, char **av)
{
	int i;
	int b;
	int tam = 0;

	for (i = 0; i < ac; i++)
	{
		for (b = 0; av[i][b]; b++)
		{
			tam++;
		}
		tam++;
	}
	tam++;
	return (tam);
}
char *argstostr(int ac, char **av)
{
	char *array;
	int i;
	int b;
	int j = 0;
	int tam = contador(ac, av);

	array = malloc(sizeof(char) * tam);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (b = 0; av[i][b] != '\0'; b++)
		{
			array[j] = av[i][b];
			j++;
		}
		array[j] = '\n';
		j++;
	}
	array[j] = '\0';
	return (array);

}
