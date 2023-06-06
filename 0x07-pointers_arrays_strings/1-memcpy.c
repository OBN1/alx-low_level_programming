#include "holberton.h"
/*file: 1-memcpy.c*/
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest : memory area destination
 * @src : memory source
 * @n : number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		*(dest + d) = *(src + d);
	}

	return (dest);
}

