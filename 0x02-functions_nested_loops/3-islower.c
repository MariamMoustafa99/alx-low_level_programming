#include "main.h"

/**
 * _islower - checks for kowercase character
 * Return: 1 for lowercase characyer or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
