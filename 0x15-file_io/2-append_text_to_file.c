#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string
 *
 * Return: length of a string
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
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: text to write
 *
 * Return: 1 on success or 0 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int mn;
	ssize_t bytes = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	mn = open(filename, O_WRONLY | O_APPEND);
	if (mn == -1)
		return (-1);
	if (length)
		bytes = write(mn, text_content, length);
	close(mn);
	return (bytes == length ? 1 : -1);
}
