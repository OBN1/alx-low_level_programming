#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	int d, e, j1, j2;
	char *q;

	for (j1 = 0; s1 && *(s1 + j1) != 0; j1++)
	{}
	for (j2 = 0; s2 && *(s2 + j2) != 0; j2++)
	{}

	q = malloc(sizeof(char) * (j1 + j2 + 1));

	if (q == NULL)
		return (NULL);

	for (d = 0; d < j1; d++)
		*(q + d) = *(s1 + d);

	for (e = 0; e < j2; e++)
		*(q + d + e) = *(s2 + e);

	*(q + d + e) = 0;

	return (q);
}

