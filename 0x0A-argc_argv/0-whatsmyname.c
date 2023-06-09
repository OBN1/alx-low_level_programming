#include "main.h"

/**
 * main - prints name and new line
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; argv[0][k] != '\0'; k++)
		putchar(argv[0][k]);

	putchar('\n');

	return (0);
}
