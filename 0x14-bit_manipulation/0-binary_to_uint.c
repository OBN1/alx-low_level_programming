#include "main.h"

/**
 * binary_to_uint - Converting a binary number to an unsigned int
 * @b: pointer to a string of chars
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui; /** ui = unsigned integer*/
	int len, base_t; /** base_t = base two and len = lentgh */

	if (!b)
		return (0);

	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base_t = 1; len >= 0; len--, base_t *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += base_t;
		}
	}

	return (ui);
}
