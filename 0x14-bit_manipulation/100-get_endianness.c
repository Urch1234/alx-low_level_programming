#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int ux;
	char *c;

	ux = 1;
	c = (char *) &ux;

	return ((int)*c);
}
