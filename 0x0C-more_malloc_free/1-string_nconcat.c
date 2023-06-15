#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: Pointer to first string
 * @s2: Ponter to second string
 * @n: first number of bytes of s2
 * Return: Pointer to the new allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int k, ls2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strle(s2))
		ls2 = strlen(s2);
	else
		ls2 = n;

	m = malloc(strlen(s1 + ls2 + 1);

	if (m == NULL)
		return (NULL);

	for (k = 0; k < strlen(s1); k++)
		m[i] = s1[k];

	for (k = strlen(s1); k < strlen(s1) + ls2; k++)
		m[i] = *s2++;

	m[i] = '\0';
	return (m);
}

