#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	long n; /* Declaring statements */
	n = 612852475143;

	for (long i = 2; i < n; i++) /* Start for loop */
	{
		for (; n % i == 0; n = n / i)
		{
			/* Empty loop body */
		}
	} /* End for loop */

	printf("%lu\n", n); /* Print new line */
	return (0);
}

