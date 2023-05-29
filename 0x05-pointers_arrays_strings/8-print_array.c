#include "main.h"
#include <stdio.h>
/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * use _putchar to print
 */
void print_array(int *a, int n)
{
	int e;

	e = 0;
	for (n--; n >= 0; n--, e++)
	{
		printf("%d", a[e]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
