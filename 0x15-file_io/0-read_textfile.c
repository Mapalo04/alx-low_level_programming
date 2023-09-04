#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stout.
 * @filename: the filename to work with.
 * @letters: the number of letters to be read.
 *
 * Return: actual number of letters it could read or print else 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fo, l, r;

	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(fo, buffer, letters);
	l = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fo);
	return (l);
}

