#include "main.h"

/**
 * get_bit - Returns a value of a bit at a given index
 * @n:decimal number
 * @index: the start from 0 of bit you wanna get
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int index_slide, validate;

	if (index >= sizeof(unsigned int) * sizeof(long))
	{
		return (-1);
	}

	index_slide = 1 << index;
	validate = n & index_slide;
	if (index_slide == validate)
		return (1);
	return (0);
}
