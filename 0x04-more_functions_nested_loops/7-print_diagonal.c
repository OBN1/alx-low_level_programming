#include "main.h"

/**
 * print_diagonal - Prints a diagonal line
 * @n: Number of times to print the diagonal line
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int x = 0; /* Counter variable */
	int y; /* Loop variable */

	if (n > 0) /* Start IF */
	{
		while (x < n) /* Print diagonal line using a while loop */
		{
			y = 0; /* Initialize loop variable */

			while (y < x) /* Print spaces */
			{
				_putchar(' ');
				y++; /* Increment the loop variable */
			}

			_putchar(92); /* Print the backslash character */
			_putchar('\n'); /* Print a newline character */

			x++; /* Increment the counter variable */
		}
	} /* End IF */
	else
	{
		_putchar('\n'); /* Print a newline character */
	}
}

