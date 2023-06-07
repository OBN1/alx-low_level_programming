#include "main.h"

/**
 * compare - compare first and last indices of the word that is being matched
 * @first: index starting from left side
 * @last: index starting from right of string, moving backward
 * Return: 1 if palindrome, 0 if not
 */

int compare(char *first, char *last)
{
	if (first >= last)
		return (1);
	if (*first == *last)
		return (compare(first + 1, last - 1));
	return (0);
}

/**
 * _strlen -find the length of string recursively
 * @str: string
 * Return: length
 */

int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	str++;
	return (1 + (_strlen(str)));
}

/**
 * is_palindrome - check if the string is a palindrome
 * @s: string to be checked
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (compare(s, (s + len - 1)));
}
