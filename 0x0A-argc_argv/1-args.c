#include "main.h"

/**
 * main - prints the number of arguments that are passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successul
 */

int main(int argc, __attribute__((unused)) * argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
