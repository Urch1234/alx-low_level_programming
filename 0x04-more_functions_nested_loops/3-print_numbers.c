#include "main.h"

/**
 * print_numbers - Function that prints all numbers from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar("\n");
}
