#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Description: This function takes a variable number of arguments and
 * prints them as integers. It also takes a separator string that is
 * printed between the numbers. If the separator is NULL, it is not printed.
 * A new line is printed at the end of the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list p;

	va_start(p, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(p, int));
		if (x + 1 != n && separator)
			printf("%s", separator);
	}
	putchar(10);
	va_end(p);
}
