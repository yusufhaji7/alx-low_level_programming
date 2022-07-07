#include "main.h"

/**
 * print_line - prints lines
 * @n: represents how many lines will there be
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
