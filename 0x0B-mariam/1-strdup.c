#include "main.h"

/**
 * _strdup - returns a pointer that contains copy of the string
 * @str: string given
 * Return: 0
 */

char *_strdup(char *str)
{
	int j = 0, size = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;
	n = malloc(size * sizeof(*str) + 1);

	if (n == 0)
	{
		return (NULL);
	}
	else
	{
		for (; j < size; j++)
			n[j] = str[j];
	}
	return (n);
}
