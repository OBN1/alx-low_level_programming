#include "main.h"
/*file: 0-memset.c*/
/**
 * _memset - fills the first n bytes of the memory area pointed by s
 *  with the constant byte b
 *
 * @s : pointer parameter of the _memset funtion
 * @n : integer parameter of the number of bytes that of the memory area
 * @b : paramter to be filled in the first n bytes of memory s
 *
 * Return: pointer to memory s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int e;

	for (e = 0; e < n; e++)
	{
		*(s + e) = b;
	}

	return (s);
}

