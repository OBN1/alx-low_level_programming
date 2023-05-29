#include "main.h"

/**
 * _isupper - checking for Uppercase letters
 * @c: displays character
 * Return: 1 for uppercase and 0 if not
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

