#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of given machine
 * @agrc: number of arguments.
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *agrv[])
{
	int count, bytes;

	if (agrc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit (2);
	}

	foor (count = 0; count < bytes; count++)
	{
		printf("%02hhx", *((char *)main + count));
		if (count < bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
