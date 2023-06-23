#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A function pointer to the function to be executed on each element.
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (!array || !action)
		return;
	for (x = 0; x < size; x++)
		(*action)(array[x]);
}
