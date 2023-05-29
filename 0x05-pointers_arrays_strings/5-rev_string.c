#include "main.h"
/**
 * rev_string - reverses string
 * @s: char type string
 */
void rev_string(char *s)
{
	int k, m, p;

	char h;

	for (k = 0; s[k] != '\0'; k++)
		;

	p = k;
	for (k--, m = 0; m < p / 2; k--, m++)
	{
		h = s[m];
		s[m] = s[k];
		s[k] = h;
	}
}
