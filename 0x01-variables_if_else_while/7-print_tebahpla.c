#include <stdio.h>
/**
 * main - Print lowercase alphabets in revere
 * Description: Using main function
 * print using char
 * Return: 0
 */
int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
