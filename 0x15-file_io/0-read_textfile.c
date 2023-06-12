#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: A pointer to the file name
 * @letters: numbers of letters it should read and print
 * Return: numbers of letters printed.
 * If it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	rd = read(file, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(file);

	free(buffer);

	return (wr);
}
