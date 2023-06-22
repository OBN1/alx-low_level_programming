#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Description: This function takes a variable number of arguments and
 * prints them as strings. It also takes a separator string that is
 * printed between the strings. If the separator is NULL, it is not printed.
 * If one of the strings is NULL, "(nil)" is printed instead. A new line is
 * printed at the end of the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

	if (str != NULL)
		printf("%s", str);
	else
		printf("(nil)");

	if (separator != NULL && i != n - 1)
		printf("%s", separator);
	}

	va_end(strings);

	printf("\n");
}
