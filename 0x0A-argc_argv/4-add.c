#include "main.h"

/**
 * main - Program that adds positive numbers followed by a new line
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b, y, r, s;

	if (argc > 0)
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b] != 0; b++)
			{
				if (argv[a][b] < 48 || argv[a][b] > 57)
				{
					puts("Error");
					return (1);
				}
			}
		}
	for (y = 1; y < argc; y++)
	{
		r = atoi(*(argv + y));
		s += r;
	}
	printf("%d\n", s);
	}
	else
		printf("0\n");
	return (0);
}
