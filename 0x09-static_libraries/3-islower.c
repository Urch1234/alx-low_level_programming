#include "main.h"
/**
 * _islower - funtion to check for lowercase
 * @c: is the int that will use the argument of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
