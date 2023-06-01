#include "main.h"
/**
 * print_triangle - prints triangel
 * @size: print size
 * Return: Always 0.
 */

void print_triangle(int size)

{
	/*Delcaring statements*/
	int a;
	int b;
	int c;
	int d;

	if (size > 0) /*Start IF*/
	{
		c = size - 1; /*variable temp*/
		for (a = 0; a < size ; a++) /*n times*/
		{
			for (b = c; b > 0 ; b--) /*order descending #*/
			{
				_putchar (' ');
			}
			for (d = 0; d <= a; d++)
			{
				_putchar (35);
			}
			c--;

			_putchar ('\n');
		}
	} /*End IF*/
	else
	{
		_putchar ('\n');
	}
}

