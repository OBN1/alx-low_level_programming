#include "main.h"
/*file: 4-strpbrk.c*/
/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 *
 * @s : string parameter
 * @accept : reference string parameter
 *
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 *
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int b, c;

	b = 0;
	c = 0;

	for (b = 0; *(s + b) != '\0'; b++)
	{
		for (c = 0; *(accept + c) != '\0'; c++)
		{
			if (*(s + b) == *(accept + c))
				return (s + b);
		}
	}
	return ('\0');
}

