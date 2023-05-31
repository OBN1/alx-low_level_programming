#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: character to be checked
 * Return: if seperator return 1. Otherwise return 0;
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char letters[] = "AEOTL";
	char replacements[] = "43071";

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (str[i] == letters[j] || str[i] == letters[j] + 32)
			{
				str[i] = replacements[j];
				break;
			}
			j++;
		}
		i++
	}
	return (str);
}
