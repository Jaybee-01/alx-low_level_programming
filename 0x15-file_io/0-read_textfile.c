#include "main.h"

/**
 * read_textfile - this read a file and print to stdout
 * @filename: the filename
 * @letters: the size
 * Return: size read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descc;
	ssize_t _readd, _write;
	char *buffer;

	if (!filename)
		return (0);

	file_descc = open(filename, O_RDONLY);
	if (file_descc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	_readd = read(file_descc, buffer, letters);
	if (_readd == -1)
		goto KILL;

	_write = write(STDOUT_FILENO, buffer, _readd);
	if (_write == -1)
		goto KILL;

	close(file_descc);
	return (_readd);

KILL:	free(buffer);
	close(file_descc);
	return (0);
}
