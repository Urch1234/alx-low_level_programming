#include "main.h"
#include <string.h>

/*
 * _strcat - concatenates the string pointer src to string pointer dest.
 * @dest: destination string.
 * @src: source string.
 *
 * Return: Return dest string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}