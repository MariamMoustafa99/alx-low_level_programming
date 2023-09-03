#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times the character \ should be printed
 * Return: always 0
 */

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= n; space++)
			{
				if (space == postn)
					_putchar(92);
				else if (space < postn)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
