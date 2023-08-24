#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: the string to be appended upon
 * @src: the string to be appended to dest
 * Return: a pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	dlen++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
