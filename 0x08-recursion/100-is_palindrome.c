#include "main.h"
int _strlen_recursion(char *s);
int helper_palindrome(char *s, int len);
/**
 * is_palindrome - see description
 * Description: checks if a string is a palindrome
 * @s: input parameter for is_palindrome
 * Return: returns 1 if it or 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (helper_palindrome(s, len));
}
/**
 * _strlen_recursion - A function to obtain the length of the string s
 * @s: A string to calculate length
 * Return: the length of string s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
/**
 * helper_palindrome - A function with a revesed string
 * @s: An input string
 * @len: the length of the string s
 * Return: A reverse string
 */
int helper_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (helper_palindrome(s + 1, len - 2));
	}
	else
		return (0);
}
