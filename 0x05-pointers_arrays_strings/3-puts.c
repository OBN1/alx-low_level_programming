#include "main.h"

/**
 * _puts - printing to stdout
 * @str: char type string
 * Use _putchar
 */
void _puts(char *str)
{
	int d = 0;

	do {
		_putchar(str[d]);
		d++;
	} while (str[d] != '\0');

	_putchar('\n');
}

