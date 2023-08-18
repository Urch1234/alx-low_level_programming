#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers from 1 - 100  Fizz Buzz and FizzBuzz
 * Description: Print fizz in place of multiple 3, Buzz in place
 * of multiple 5, FizzBuzz in place of multile of 3 and 5
 * then print rest of the numbers that
 *  didn't in this category.
 * Return: void
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			printf("FizzBuzz ");
		} else if (n % 3 == 0)
		{
			printf("Fizz ");
		} else if (n % 5 == 0)
		{
			printf("Buzz ");
		} else
		{
			printf("%d ", n);
		}
	}
	return (0);
}
