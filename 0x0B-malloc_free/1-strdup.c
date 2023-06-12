#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *y;
	int x;

	if (str == 0)
		return (NULL);

	for (x = 0; *(str + x) != 0; x++)
	{}

	y = malloc(sizeof(char) * x + 1);

	if (y == NULL)
		return (0);

	for (x = 0;  *(str + x) != 0; x++)
		*(y + x) = *(str + x);

	*(y + x) = 0;
	return (y);
}
