#include "main.h"
/**
 *_strncat -  concatenates two strings
 *@dest: Pointing to an char that will be updated
 *@src: Pointer to an char that will be updated
 *@n: value
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = ('\0');

	return (dest);
}
