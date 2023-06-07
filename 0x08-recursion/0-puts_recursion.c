#include "main.h"

/**
 * _put_recursion - Prints a string followed by a new line
 * @s: The string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		_putchar([k]);
		k++;
	}
	_putchar('\n');
}

