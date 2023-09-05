#include "main.h"

/**
 * _strdup - write s a function that returns a newly allocated space in memory.
 * @str: string to be copied
 * Return: Null in case of error, pointer allocate space.
 */

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}
	cpy[len] = '\0';
	return (cpy);
}
