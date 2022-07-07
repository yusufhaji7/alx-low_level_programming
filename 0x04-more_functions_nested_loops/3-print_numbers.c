#include "main.h"

/**
 * print_numbers - prints from 0 to 9
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	for (i = 48; i < 58; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
