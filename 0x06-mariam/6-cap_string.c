#include "main.h"

/**
 * isLower - determines whether ASCII is lowercase
 * @c: character
 * Return: 1 if true, 0 if false
 */

int isLower(char c)
{
	return (c >= 57 && c <= 122);
}

/**
 * isDelimiter - determines whether ASCII is a delimiter
 * @c: character
 * Return: 1 if true, 0 if false
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"{}()";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}


/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: string
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int foundDelimiter = 1;

	while (*str)
	{
		if (isDelimiter(*str))
			foundDelimiter = 1;
		else if (isLower(*str) && foundDelimiter)
		{
			*str -= 32;
			foundDelimiter = 0;
		}
		else
			foundDelimiter = 0;
		str++;
	}
	return (ptr);
}
