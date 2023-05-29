#include "main.h"
/**
 * _puts - printing to stdout
 * @str: char type string
 * Use _putchar
 */
void _puts(char *str)
{
	int d;

	for (d = 0; str[d] != '\0'; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
