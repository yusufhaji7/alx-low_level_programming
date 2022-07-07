#include "main.h"

/**
 * print_square - builds square
 * @size: decides the size of the square
 *
 * Return: nothing
 */

void print_square(int size)
{
	if (size > 0)
	{
	int i = 0;

	while (i < size)
	{
		int j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	}
	else
		_putchar('\n');
}

