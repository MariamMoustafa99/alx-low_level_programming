#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 0; i++)
	{
		for (j = 0; j < 0; j++)
		{
			_putchar(a[i][j]);
			_putchar('\n');
		}
	}
}
