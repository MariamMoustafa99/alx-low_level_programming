#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n: integer
 * Return: always 0
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
