#include "main.h"

/**
 * print-binary - prints the binary representation of a num
 * @n: num to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, output = 0;

	while (bit)
	{
		if (n && 1L << --bit)
		{
			_putchar('1');
			output++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
