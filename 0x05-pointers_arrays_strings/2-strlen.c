#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char type pointer
 * Return: length
 */
int _strlen(char *s)
{
    int d = 0;

    while (s[d] != '\0')
    {
        d++;
    }

    return d;
}

