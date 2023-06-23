#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the main function.
 * @num_bytes: Number of bytes to print.
 */
void print_opcodes(int num_bytes);

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: 0 on success, 1 for incorrect number of arguments,
 *         2 for negative number of bytes.
 */
int main(int argc, char *argv[])
{
	int size, i;
	char *p;

	p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < size; i++)
	{
		printf("%02hhx", p[i]);
		if (i + 1 != size)
			putchar (32);
		else
			putchar (10);
	}
	return (0);
}

