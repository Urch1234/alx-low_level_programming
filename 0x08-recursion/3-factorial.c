#include "main.h"

/**
 * factorial - Computes the factorial of any given number
 * @n: The number
 * Return: factorial of a number
 */
int factorial(int n)
{
	int next_factorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next_factorial = factorial(n - 1);
	return (n * next_factorial);
}
