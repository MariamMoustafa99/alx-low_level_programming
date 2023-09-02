#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
