#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: Pointer to the file name.
 * @text_content: Pointer to written content 
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, lttrs, wr;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (lttrs = 0; text_content[lttrs]; lttrs++)
			;

		wr = write(file, text_content, lttrs);

		if (wr == -1)
			return (-1);
	}

	close(file);

	return (1);
}
