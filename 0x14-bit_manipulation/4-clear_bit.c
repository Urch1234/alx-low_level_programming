#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit.
 *
 * Return: 1 if successfull, -1 if fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ux;

	if (index > 63)
		return (-1);

	ux = 1 << index;

	if (*n & ux)
		*n ^= ux;

	return (1);
}
