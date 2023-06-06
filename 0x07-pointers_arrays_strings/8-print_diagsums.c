#include "main.h"
#include <stdio.h>
/*file: 8-print_diagsums.c*/
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a : square matrix array
 * @size : size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int c = 0, leadingSum = 0, antidiagSum = 0;

	for (c = 0; c < (size * size); c++)
	{
		if (c % (size + 1) == 0)
			leadingSum += *(a + c);
		if (c % (size - 1) == 0 && c != 0 && c < size * size - 1)
			antidiagSum += *(a + c);
	}

	printf("%d, %d\n", leadingSum, antidiagSum);
}

