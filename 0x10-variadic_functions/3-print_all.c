#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the provided format.
 * @format: A list of types of arguments passed to the function.
 *
 * Description: This function takes a variable number of arguments and prints
 * them based on the provided format string. The format string specifies the
 * types of the arguments. The supported format specifiers are:
 *   - 'c' for char
 *   - 'i' for integer
 *   - 'f' for float
 *   - 's' for string (if the string is NULL, "(nil)" is printed instead)
 * Any other character in the format string is ignored. A new line is printed
 * at the end of the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char current_format;

	va_start(args, format);

	while (format && format[i])
	{
	current_format = format[i];

	if (i != 0 && (current_format == 'c' || current_format == 'i' ||
			current_format == 'f' || current_format == 's'))
		printf(", ");

	switch (current_format)
	{
		case 'c':
		printf("%c", va_arg(args, int));
		break;
		case 'i':
		printf("%d", va_arg(args, int));
		break;
		case 'f':
		printf("%f", va_arg(args, double));
		break;
		case 's':
		str = va_arg(args, char *);
		printf("%s", (str != NULL) ? str : "(nil)");
		break;
	}

	i++;
	}

	va_end(args);

	printf("\n");
}
