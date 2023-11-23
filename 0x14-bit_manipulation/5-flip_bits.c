#include "main.h"

/**
 * flip_bits - returns num of bits to flip to get from one num to another
 * @n: 1st num
 * @m: 2nd num
 * Return: num of bits to flip to convert nums
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value = n ^ m;
	unsigned int c = 0;

	while (value)
	{
		if (value & 1ul)
			c++;
		value = value >> 1;
	}
	return (c);
}
