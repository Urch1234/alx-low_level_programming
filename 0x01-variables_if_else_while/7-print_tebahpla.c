#include <stdio.h>
/**
 * main - Print lowercase alphabets in reverse 
 * Description: Using main function- apply putchar function print lowercase alphabets in reverse form, followed by a new line
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
