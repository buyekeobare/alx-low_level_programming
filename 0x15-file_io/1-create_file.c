#include "main.h"

/**
 * create_file - creates a file
 * @filename: Pointer to a file name.
 * @text_content: Pointer to content written in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file, lttrs, wr;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (lttrs = 0; text_content[lttrs]; lttrs++)
		;

	wr = write(file, text_content, lttrs);

	if (wr == -1)
		return (-1);

	close(file);

	return (1);
}
