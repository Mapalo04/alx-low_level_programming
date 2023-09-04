#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - entry point
 * @argc: total number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on succes.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int elf;

	elf = open(argv[1], O_RDONLY);
	if (elf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}

	return (0);
}
