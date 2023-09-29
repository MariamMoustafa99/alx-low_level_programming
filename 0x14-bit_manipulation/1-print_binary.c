#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, output = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			output++;
		}
		else if (output)
			_putchar('0');
	}

	if (!output)
		_putchar('0');
}
