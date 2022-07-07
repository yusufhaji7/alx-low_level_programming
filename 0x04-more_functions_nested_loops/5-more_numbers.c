#include "main.h"

/**
 * more_numbers - 14 10 times
 *
 * Return: 0
 */

void more_numbers(void)
{

	int j = 0;

	while (j < 10)
	{
		int i = 0;

		while (i < 10)
		{
			_putchar(i + '0');
			i++;
		}

		int x = 0;

		while (x < 5)
		{
			_putchar(1 + '0');
			_putchar(x + '0');
			x++;
		}
		j++;
		_putchar('\n');
	}
}
