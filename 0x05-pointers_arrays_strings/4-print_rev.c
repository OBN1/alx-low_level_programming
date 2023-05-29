#include "main.h"
/**
 * print_rev - printing string in reverse
 * @s: char type string
 */
void print_rev(char *s)
{
	int e = 0;

	while (s[e] != '\0')
		e++;

	while (e-- >= 0)
	{
		_putchar(s[e]);
		e--;
	}

	_putchar('\n');
}

