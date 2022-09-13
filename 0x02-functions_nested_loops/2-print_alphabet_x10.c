#include "main.h"
/**
 * print_alphabet_x10 - funtion to print abc 10 times
 *  Description: print lowercase alphabet 10x
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 'z'; i++)
	{
		for (c = 0; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
