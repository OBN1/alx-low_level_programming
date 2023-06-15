#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates memory block using malloc & free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: Size in bytes of the allocated space for ptr
 * @new_size: New size in bytes of the new memory block
 * Return: Pointer to newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, *ptr2;
	unsigned int x, y;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr1 = malloc(new_size);

	if (ptr1 == NULL)
		return (NULL);

	ptr2 = ptr;
	if (new_size > old_size)
		y = old_size;
	if (new_size < old_size)
		y = new_size;

	for (x = 0; x < y; x++)
		ptr1[x] = ptr2[x];

	free(ptr);
	return (ptr1);
}
