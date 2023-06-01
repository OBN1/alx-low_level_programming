#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int x = 100; /* Declaring statements */
	int y = 1;

	do {
		if (y % 3 == 0 && y % 5 == 0) /* Multiple 3 and 5 */
		{
			printf("FizzBuzz ");
		}
		else if (y % 3 == 0) /* Multiple 3 */
		{
			printf("Fizz ");
		}
		else if (y % 5 == 0) /* Multiple 5 */
		{
			if (y < x)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
		{
			printf("%d ", y); /* Print y */
		}
		y++;
	} while (y <= x); /* End Do-While */

	printf("\n"); /* New line */

	return (0);
}

