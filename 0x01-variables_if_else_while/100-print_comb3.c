#include <stdio.h>
/**
 * main - print two digits
 * Description: using main function
 * the program prints two digits that are same combination of digits
 * Return: 0
 */
int main(void)
{
int i, j;

for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
{
if (j > i)
{
	putchar(i);
	putchar(j);
	if (i != '8')
	{
		putchar(',');
		putchar(' ');
	}
}
}
}
}
putchar('\n');
return (0);
}
