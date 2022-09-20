#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second intger
 * Returns: Always 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
