#include "main.h"
#include <stdlib.h>

/**
 * _strncat - The strncat() function appends not more than n characters from 
 * *src, and then adds a terminating ‘\0’.
 * @dest: string to be appended to
 * @src: string to be appended
 * @n: integer parameter that determines number of character
 * Return: the pointer src
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	dest_len = 0;

	while (dest[i])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
