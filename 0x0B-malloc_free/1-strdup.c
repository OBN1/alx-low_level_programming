#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Copies the string given as parameter
 * @str: String to duplicate
 *
 * Return: Pointer to the copied string (Success), NULL (error)
 */
char *_strdup(char *str)
{
	int i, j;
	char *ar;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	;

	ar = (char *)malloc(sizeof(char) * (i + 1);

	if (ar == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		ar[j] = str[j];

	return (ar);
}
