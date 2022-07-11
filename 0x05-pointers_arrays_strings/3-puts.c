#include "main.h"

/**
 * _puts - prints a string
 * @str: characters to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		int count = 0; 

		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
