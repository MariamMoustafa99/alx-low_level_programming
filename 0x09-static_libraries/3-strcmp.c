#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares pointers to two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */

int _strcmp(char *s1, char *s2)
{
        while (*s1 && *s2 && *s1 == *s2)
        {
        s1++;
        s2++;
        }
        return (*s1 - *s2);
}
