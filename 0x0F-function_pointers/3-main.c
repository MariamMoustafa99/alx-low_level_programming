#include "3-calc.h"

/**
 * main - checks code for the school students
 * @argc: number of args
 * @argv: argument value
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int (*op_func)(int, int), a, b;

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (!op_func || argc != 4)
		printf("Error\n"), exit(98);

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(99);

	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(a, b));
	return (0);
}
