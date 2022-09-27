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

	for (i = 0; *(s + 1); i++)
	{
		if (*(s + 1) == i)
			return (s + 1);
	}
	if (*(s + 1) == 1)
		return (s + 1);
	return (0);
}
