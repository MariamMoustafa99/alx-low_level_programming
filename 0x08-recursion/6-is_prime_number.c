#include "main.h"

/**
 * is_prime_number - checks if input is a prime number
 * @n: integer
 * @othern: integer
 * Return: 0 or 1
 */

int check_prime(int n, int othern);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all numbers less than n
 * @n: integer
 * @othern: integer
 * Return: int
 */

int check_prime(int n, int othern)
{
	if (othern >= n && n > 1)
		return (1);
	else if (n % othern == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othern + 1));
}
