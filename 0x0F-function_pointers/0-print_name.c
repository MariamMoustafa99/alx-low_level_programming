#include "finction_pointer.h"

/**
 * print_name - prints a name
 * @name: string name
 * @f: pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
