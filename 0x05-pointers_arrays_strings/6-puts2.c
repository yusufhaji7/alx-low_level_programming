#include "main.h"

/**
 * puts2 - jumps a character
 * @str: represents the string
 *
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count = count + 2;
	}
	_putchar('\n');
}
