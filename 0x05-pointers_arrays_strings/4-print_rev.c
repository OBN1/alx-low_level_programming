#include "main.h"
/**
 * print_rev - printing string in reverse
 * @s: char type string
 */
void print_rev(char *s)
{
	int e;

	for (e = 0; s[e] != '\0'; e++)
		;

	for (e--; e >= 0; e--)
		_putchar(s[e]);

	_putchar('\n');
}
