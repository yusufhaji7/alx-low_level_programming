#include "main.h"

/**
 * puts_half - prints half the string
 * @str: the whole string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	if ((count % 2) == 0)
	{
		count = count / 2;
		while (str[count] != '\0')
		{
			_putchar(str[count]);
			count++;
		}
	}
	else
	{
		count = (count - 1) / 2;
		while (str[count] != '\0')
		{
			_putchar(str[count]);
			count++;
		}
	}
	_putchar('\n');
}
