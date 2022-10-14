#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string printed inbetween strings.
 * @n: number of strings.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list str;

	if (separator == NULL)
		separator = "";

	va_start(str, n);

	for (i = 0; i < n, i++)
	{
		s = va_arg(str, char *);

		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
