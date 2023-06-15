#include "main.h"
#include <stdlib.h>

/**
 * array_range -creates array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 * Return: Pointer to the new array
 */

int *array_range(int min, int max)
{
	int *array;
	int x, y;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (x = min, y = 0; x <= max; x++, y++)
	{
		*(array + y) = x;
	}
	return (array);
}
