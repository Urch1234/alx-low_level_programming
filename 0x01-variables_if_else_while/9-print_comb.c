#include <stdio.h>
/**
 * main - print all possible combination of single-digit number
 * Description: using main function
 * print in ascending order all possible combination of single-digits
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
	putchar('\n');
	return (0);
}
