#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: content of the string.
 * Return: If the function fails -1 else 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fo, l = 0, r;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[l])
			l++;
	}

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	r = write(fo, text_content, l);
	if (fo == -1 || r == -1)
		return (-1);
	close(fo);
	return (1);
}
