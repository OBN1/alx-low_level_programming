#include "main.h"
/**
 * puts_half - printing half string
 * @str: array type string
 */
void puts_half(char *str)
{
	int e;

	for (e = 0; str[e] != '\0'; e++)
		;

	e++;
	for (e /= 2; str[e] != '\0'; e++)
	{
		_putchar(str[e]);
	}
	_putchar('\n');
}
