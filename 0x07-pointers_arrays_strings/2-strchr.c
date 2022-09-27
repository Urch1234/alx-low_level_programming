#include "main.h"

/**
 *_strchr - locates a charater in a string
 *@s: string yo check
 *@c: character to check for
 *Return: return pointer to spot in s with c or null
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
