#include "main.h"

/**
 * print_line - Draw a straight line in the terminal.
 * @n: Number of times to print the underscore character
 * Return: Always 0.
 */
void print_line(int n)
{
	int e = 0; /* Initialize counter */

	if (n > 0) /* Start IF */
	{
		while (e < n) /* Print (_) n times using a while loop */
		{
			_putchar(95); /* The number 95 represents the underscore character in ASCII */
			e++; /* Increment the counter */
		}
		_putchar('\n'); /* Print a newline character */
	} /* End IF */
	else
	{
		_putchar('\n'); /* Print a newline character */
	}
}

