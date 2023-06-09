#include "main.h"

/**
 * main - prints name and new line
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
