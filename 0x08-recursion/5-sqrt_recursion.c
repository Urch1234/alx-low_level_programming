#include "main.h"

/**
 * _sqrt_recursion - Computes natural square root of a number
 * @n: number to compute
 * Return: The natural square root n
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - Computes natural square root of a number
 * @n: number to compute
 * @x: squared number
 * Return: The natural square root n
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
