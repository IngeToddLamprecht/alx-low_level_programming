#include "main.h"

int check_palindrome(char *s);
/**
 * is_palindrome - Confirms paliindrome
 * @s: string
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palindrome(s));
}

/**
 * check_palindrome - Checks palindrome
 * @s: string
 *
 * Return: 0 or 1
 */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}

	return (1);
}

/**
 * _strlen_recursion - Length
 * @s: string
 *
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
