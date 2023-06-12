#include "main.h"
#include <stdlib.h>

/**
 * create_array - Cretates an array of chars
 * and initializes it with a specific char
 * @size: Size of the array to create
 * @c: Char to initialize
 * Return: pointer to the array (succes); NULL (error)
 */

char *create_array(unsigned int size, char c)
{
	char *f;
	unsigned int g;

	if (size == 0)
		return (NULL);

	f = (char *)malloc(sizeof(char) * size);

	if (f == NULL)
		return (0);

	for (g = 0; g < size; g++)
		*(f + g) = c;
	return (f);
}
