#include "main.h"

/**
 * len - gets the length of a string
 * @s: the string to get the length
 * Return: returns the lenght of a string
 */
int len(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + len(s));
	}
	else
		return (0);
}

/**
 * rev - reverse the pallin string
 * @s: the original string
 * n1: the count from 0
 
 * @n2: the count fron slength
 * Return: returns 1 or 0 check the pallin
 */
int rev(char *s, int n1, int n2)
{

	if (s[n1] == s[n2])
	{
		if (n1 < n2)
		{
			n1++;
			n2--;
			return (0 + rev(s, n1, n2));
		}
		return (1);
	}
	else
		return (0);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string to check
 * Return: returns 1 or 0
 */
int is_palindrome(char *s)
{

	if (*s == '\0')
		return (0);
	return (rev(s, 0, (len(s) - 1)));
}
