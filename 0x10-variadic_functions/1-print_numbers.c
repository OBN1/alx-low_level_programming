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
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(numbers);

	printf("\n");
}
