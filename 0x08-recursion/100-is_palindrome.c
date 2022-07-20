#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - gives the length of a string
 * @s: string to be calculated the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _palindrome - checks the characters recursively for palindrome
 * @s: string to be checked
 * @i: iterator
 * @length: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int _palindrome(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (_palindrome(s, i + 1, length - 1));
}
