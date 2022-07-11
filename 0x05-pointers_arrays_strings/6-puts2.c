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
	int num = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	while (num < count)
	{
		_putchar(str[num]);
		num = num + 2;
	}
	_putchar('\n');
}
