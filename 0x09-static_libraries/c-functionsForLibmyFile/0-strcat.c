#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * _strcat - concatenates two strings
 * @dest: copy source to this buffer
 * @src: source to copy
 * Return: concatenate strings
 */

char *_strcat(char *dest, char *src)
{
	int y, d;

	y =  _strlen(dest);

	for (d = 0; src[d] != '\0'; y++, d++)
	{
		dest[y] = src[d];
	}
	dest[y] = '\0';
	return (dest);
}

