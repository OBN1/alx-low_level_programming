#include "main.h"
/**
 * print_square - prints a square
 * @size: print size
 * Return: Always 0.
 */

void print_square(int size)
{
	/*Delcaring statements*/
	int x;
	int y;

	if (size > 0) /*Start IF*/
	{
		for (x = 0; x < size; x++) /*Print (_) n times*/
		{
			for (y = 0; y < size; y++) /*Start FOR*/
			{
				_putchar (35);
			}
			_putchar ('\n');
		} /*END second FOR*/
	} /*End IF*/
	else
	{
		_putchar ('\n');
	}
}

