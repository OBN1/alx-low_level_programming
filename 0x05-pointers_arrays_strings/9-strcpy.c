#include "main.h"
/**
 * _strcpy - Copy the string pointed to by pointer
 * @dest: char type string
 * @src: char type string
 * Return: Pointer
 */
char *_strcpy(char *dest, char *src)
{
	int e;

	for (e = 0; src[e] != '\0'; e++)
	{
		dest[e] = src[e];
	}
	dest[e] = '\0';

	return (dest);
}
