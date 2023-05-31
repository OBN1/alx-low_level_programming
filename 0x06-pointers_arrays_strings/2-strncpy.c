#include "main.h"
/**
 *_strncpy -  copies a string
 *@dest: A pointer to n char that will be updated
 *@src: A pointer to a char that will be updated
 *@n: value
 *Return: dest
 */
#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = ('\0');
	}

	return (dest);
}

