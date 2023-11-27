#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: no of bytes to read
 *
 * Return: no of bytes read or printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int mn;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	mn = open(filename, O_RDONLY);
	if (mn == -1)
		return (0);
	bytes = read(mn, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(mn);
	return (bytes);
}
