#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase then upper
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

