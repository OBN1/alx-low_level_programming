#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int e; /*Declaring statements*/
	int num1;
	int num2;
	int result;

	e = 0; /*count*/
	result = 0;
	while (e < 10)/*Start first While*/
	{
		while (result <= 14) /*Start the second While loop*/
		{
			if (result < 10) /*swap*/
			{
				num2 = result;
			}
			else /*print num > 9*/
			{
				num1 = result / 10;
				num2 = result % 10;
				_putchar (num1 + '0');
			}
			_putchar (num2 + '0');
			result++;
		}
		e++;
		result = 0; /*reset count*/
		_putchar ('\n'); /*new line*/
	}
}

