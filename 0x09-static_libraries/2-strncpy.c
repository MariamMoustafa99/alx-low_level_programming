#include "main.h"
#include <stdio.h>

/**
 * _strncpy = copies from string src to dest
 * @dest: buffer storing the string copy
 * @src: source string
 * @n: max number of bytes
 * Return: A pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
        int index = 0, src_len = 0;

        while (src[index++])
        src_len++;

        for (index = 0; src[index] && index < n; index++)
        dest[index] = src[index];

        for (index = src_len; index < n; index++)
        dest[index] = '\0';

        return (dest);
}
