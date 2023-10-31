#include "file.h"

/**
 * append_text_to_file -this append text to file
 * @filename: -
 * @text_content: -
 * Return: Success ? 1 : -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descc, _write;

	file_descc = open(filename, O_WRONLY | O_APPEND);
	if (file_descc == -1)
		return (-1);

	if (!text_content)
	{
		close(file_descc);
		return (1);
	}

	_write = write(file_descc, text_content, slen(text_content));
	if (_write == -1 || _write != slen(text_content))
	{
		close(file_descc);
		return (-1);
	}

	close(file_descc);
	return (1);
}
