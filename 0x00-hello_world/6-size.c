#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Descripton: using the main function
 * this prints prints the size of various types on the computer it is compiled
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long j;
	long long k;
	float f;

	printf("Size of a char: %1d byte(s)\n", sizeof(c));
	printf("Size of an int: %1d byte(s)\n", sizeof(i));
	printf("Size of a long int: %1d byte(s)\n", sizeof(j));
	printf("Size of a long long int: %1d byte(s)\n", sizeof(k));
	printf("Size of a float: %1d byte(s)\n", sizeof(f));
	return (0);
