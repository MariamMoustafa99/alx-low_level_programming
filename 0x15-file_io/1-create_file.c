#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int j = 0;

	if (!s)
		return (0);

	while (*s++)
		j++;
	return (j);
}

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text to write
 *
 * Return: 1 on success and 0 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int mn;
	ssize_t bytes = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	mn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (mn == -1)
		return (-1);
	if (length)
		bytes = write(mn, text_content, length);
	close(mn);
	return (bytes == length ? 1 : -1);
}
