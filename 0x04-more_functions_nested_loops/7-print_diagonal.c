#include "main.h"

/**
 * print_diagonal - prints diagonal with
 * @n: number of diagonals
 *
 * Return: nothing
 */

void print_diagonal(int n)
{

	if (n > 0)
	{
	int i = 0;

	while (i < n)
	{
		int j = 0;

		while (j <= i)
		{
			if (j == 0)
			{
				j++;
				continue;
			}
			_putchar(' ');
			j++;
		}
	_putchar('\\');
	_putchar('\n');
	i++;
	}
	}
	else
		_putchar('\n');
}
