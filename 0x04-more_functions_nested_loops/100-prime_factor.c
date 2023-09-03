#include "main.h"

/**
 * _sqrt - finds the square root
 * @a: input number
 * Return: square root of a
 */

double _sqrt(double a)
{
	float sqrt, tmp;

	sqrt = a / 1;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (a / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_number - finds and prints largest prime factor of a num
 *
 * @num: number
 */

void largest_prime_number(long int num)
{
	int prmNu, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (prmNu = 3; prmNu <= _sqrt(num); prmNu += 2)
	{
		while (num % prmNu == 0)
		{
			num = num / prmNu;
			largest = prmNu;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	largest_prime_number(612852475143);

	return (0);
}
