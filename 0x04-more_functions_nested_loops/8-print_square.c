#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @size: parameter
 * Return: void
 */

void print_square(int size)
{
	int m1, m2;

	if (size > 0)
	{
		for (m1 = 0; m1 < size; m1++)
		{
			for (m2 = 0; m2 < (size - 1); m2++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
