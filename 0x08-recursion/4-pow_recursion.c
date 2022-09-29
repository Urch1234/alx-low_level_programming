#include "main.h"

/**
 * _pow_recursion - computes power of a function
 * @x: Value to be raised
 * @y: Exponent to be raised to
 * Return: Return the value of raised number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
