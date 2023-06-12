#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matxix
 * @height: height of the matrix
 *
 * Return: poitner to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **y;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	y = (int **) malloc(sizeof(int *) * height);

	if (y == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		y[a] = (int *) malloc(sizeof(int) * width);
		if (y[a] == NULL)
		{
			free(y);
			for (b = 0; b <= a; b++)
				free(y[b]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			y[a][b] = 0;
		}
	}
	return (y);
}
