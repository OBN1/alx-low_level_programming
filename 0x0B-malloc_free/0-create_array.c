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
	if (size == 0)
		return (NULL);

	char *arry = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
