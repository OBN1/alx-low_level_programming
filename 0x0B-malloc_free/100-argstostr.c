#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - cencetenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Pointer to the new string (success), NULL (error)
 */

char *argstostr(int ac, char **av)
{
	int length = 0, m = 0, n = 0, count = 0;
	char *y;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n] != 0; n++)
		{
			length++;
		}
		length++;
	}
	y = malloc(sizeof(char) * (length + 1));

	if (y == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n] != 0; n++)
		{
			y[count] = av[m][n];
			count++;
		}
		y[count] = 10;
		count++;
	}
	return (y);
}

