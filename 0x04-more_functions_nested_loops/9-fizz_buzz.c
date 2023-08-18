#include <stdlib.h>
#include <stdio.h>

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
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz ");
	} else if (i % 3 == 0)
	{
		printf("Fizz ");
	} else if (i % 5 == 0)
	{
		if (i != 100)
		{
			printf("Buzz ")
		} else
		{
			printf("Buzz");
		}
	else
	{
		printf("%d", i);
	}
	printf("\n");
	}
	return (0);
}
