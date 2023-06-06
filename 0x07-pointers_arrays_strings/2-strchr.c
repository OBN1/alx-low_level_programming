#include "main.h"

/* file: 2-strchr.c*/
/**
 * _strchr - returns a pointer to the first accurrence
 * of the character c in the string
 *
 * @s : string in which to find the first occurrence of char c
 * @c : char to find in string s
 *
 * Return: pointer to the fist occurence of char c, NULL if not found
 *
 *
 */

char *_strchr(char *s, char c)
{
	int d;

	for (d = 0; *(s + d) != '\0'; d++)
	{
		if (*(s + d) == c)
			return (s + d);
	}

	if (*(s + d) == c)
		return (s + d);

	return ('\0');
}

