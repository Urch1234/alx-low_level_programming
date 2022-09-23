#include "main.h"

/**
 * _strcat - concatenates two strings (src string to dest string)
 * @dest: String that will be appended
 * @src: String to concatenated upon
 *
 * Return: returns poiter to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index++];

	return (dest);
}
