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

		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
			i++;
		}
		j++;
		_putchar('\n');
	}
}
