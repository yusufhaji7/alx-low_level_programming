#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return;
	else
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s + i);
	}
}
