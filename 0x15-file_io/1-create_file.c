#include "file.h"

/**
 * create_file - create a file
 * @filename: filename
 * @text_content: data
 * Return: Success ? 1 : -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_descc, _write;

	if (!filename)
		return (-1);

	file_descc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
