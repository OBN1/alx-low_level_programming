#include "main.h"
/*file: 3-strspn.c*/
/**
 * _strspn - returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 *
 * @s : string parameter
 * @accept : bytes to compare in s
 *
 * Return: i, number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		c = 1;
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				c = 0;
				break;
			}
		}

		if (c == 1)
			break;
	}

	return (a);
}

