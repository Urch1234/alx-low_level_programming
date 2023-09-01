#include "main.h"

/**
 * is_palindrome - Prints palindrome
 * @s: string
 * Return: 1 if s is a pallindrome, then 0 if otherwise
 */
int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/**
 * check - checks if string is a palindrome
 * @s: string to be checked
 * @start: start index
 * @end: end of index
 * @flag: flag to indicate if a string is a palindrome
 * Return: void
 */
void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}

/**
 * _strlen_recursion - calculates the lengthof a string
 * @s: string to be used
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
