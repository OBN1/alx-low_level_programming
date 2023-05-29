#include "main.h"
/**
 * _atoi - Converting a string to integer
 * @s: char array string
 * Return: first integer
 */
int _atoi(char *s)
{
	int e;

	int k, m;

	k = 0;
	m = -1;
	for (e = 0; s[e] != '\0'; e++)
	{
		if (s[e] == '-')
			m *= -1;

		if (s[e] > 47 && s[e] < 58)
		{
			if (k < 0)
				k = (k * 10) - (s[e] - '0');

			else
				k = (s[e] - '0') * -1;

			if (s[e + 1] < 48 || s[e + 1] > 57)
				break;
		}
	}
	if (m < 0)
		k *= -1;

	return (k);
}

