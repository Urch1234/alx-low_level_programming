#include "main.h"

/**
 * is_prime_number - computes prime numbers
 * @n: The prime number
 * Return: returns 1 or 0
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - computes prime numbers
 * @n: The prime number
 * @start: number to start checking from
 * Return: returns 1 otherwise 0 if not prime
 */
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
