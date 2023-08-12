#include <stdio.h>
/**
 * main - prints if it is a lowercase followed by uppercase alphabet
 * Description: using the main function
 * this program prints alphabets in lowercase as well as uppercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
