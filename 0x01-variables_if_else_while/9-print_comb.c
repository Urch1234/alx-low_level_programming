#include <stdio.h>
/**
 * main - print all possible combination of single-digit number
 * Description: using main function
 * print in ascending order "0,1,2,3,4,5,6,7,8,9"
 * Return: 0
 */
int main(void)
{
int i;

for (i = 48; i <= 57; i++)
{
	putchar(i);
	if (i != 57)
	{
		putchar(',');
		putchar(' ');
	}
}
	putchar('\n');
	return (0);
}
