#include "main.h"

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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
