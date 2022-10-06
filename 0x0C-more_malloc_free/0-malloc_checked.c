#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: memory to be allocated
 * Return: pointer to allocated memory or
 * normal process termination if error
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
