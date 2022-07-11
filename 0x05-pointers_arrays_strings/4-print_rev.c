#include "main.h"

/**
 * print_rev - prints in reverse order
 * @s: text to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	while (count > 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar(s[0]);
	_putchar('\n');
}
