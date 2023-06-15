#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: Number of each element
 * @size: size of each element
 * Return: Pointer to allocated memory
 */

void *_calloc(usigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		*(ptr + i) = 0;
	}
	return (ptr);
}
