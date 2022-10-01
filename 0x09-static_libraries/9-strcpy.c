#include "main.h"

/**
 * _strcpy - copy and paste string
 * @dest: destination
 * @src: source
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int arr = 0;

	while (*(src + arr) != '\0')
	{
		*(dest + arr) = *(src + arr);
		arr++;
	}
	*(dest + arr) = '\0';

	return (dest);
}
