#include "main.h"

/**
 * binary_to_uint - This converts a binary number to an unsigned int
 * @b: binary number.
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ux;
	int i, base_two;

	if (!b)
		return (0);

	ux = 0;

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--, base_two = 1; i >= 0; i--, base_two *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] & 1)
		{
			ux += base_two;
		}
	}
	return (ux);
}
