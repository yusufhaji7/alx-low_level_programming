#include "main.h"

/**
 * print_numbers - prints from 0 to 9
 *
 * Return: nothing.
 */

void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
