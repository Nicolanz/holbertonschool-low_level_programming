#include "holberton.h"
/**
 * read_textfile - Reads and writes the content of a file
 * @filename: File
 * @letters: Number of letters.
 * Return: escribir
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *string;
	int leer, escribir;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	string = malloc(letters * sizeof(char));
	if (string == NULL)
	{
		return (0);
	}
	leer = read(fd, string, letters);
	if (leer == -1)
	{
		return (0);
	}
	escribir = write(STDOUT_FILENO, string, (ssize_t) leer);
	if (escribir == -1)
	{
		return (0);
	}
	close(fd);
	return (escribir);
}
