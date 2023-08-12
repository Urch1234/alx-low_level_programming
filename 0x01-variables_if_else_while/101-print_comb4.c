#include <stdio.h>
/**
 * main - print if there are three combined digit
 * Description: using main function
 * this program will print unrepeating combinationof three digits
 * Return: 0
 */
int main(void)
{
int i, n, k;

for (i = '0'; i <= '9'; i++)
{
for (n = '0'; n <= '9'; n++)
{
for (k = '0'; k <= '9'; k++)
{
if (i > n && n > k)
{
	putchar(i);
	putchar(n);
	putchar(k);
	if (i != '7')
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


