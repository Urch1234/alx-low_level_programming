#include <stdio>

/**
 * main - print if it is an alphabet
 *
 * Description: using the main function
 * this program prints alphabets in lowercase as well as uppercase
 * return: 0
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
