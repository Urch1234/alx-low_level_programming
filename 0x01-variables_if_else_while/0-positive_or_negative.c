#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints if the number is either positive, zero, or negative
*
* Description: Using the main function this program
* prints "Programing is positive, zero, or negative
* Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	 /* your code emters here */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}

	return (0);
}
