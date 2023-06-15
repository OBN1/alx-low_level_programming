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
	char *ptr
		unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (unsigned int i = 0; i < total_size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
