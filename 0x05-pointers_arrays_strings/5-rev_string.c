#include "main.h"

/**
 * rev_string - prints in reverse order
 * @s: text to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	count--;

	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
