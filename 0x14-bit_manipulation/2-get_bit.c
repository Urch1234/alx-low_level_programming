#include "main.h"

/**
 * get_bit - returns the value of a bit at aa given index
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int ux;

	if (n == 0 && index < 64)
		return (0);

	for (ux = 0; ux <= 63; n >>= 1, ux++)
	{
		if (index == ux)
		{
			return (n & 1);
		}
	}
	return (-1);
}
