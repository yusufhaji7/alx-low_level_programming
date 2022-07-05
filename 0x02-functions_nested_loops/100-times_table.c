#include "main.h"

/**
 * print_times_table - print the times table until n
 *
 * @n: n table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int a;
	int b;

	if (n >= 0 && n <= 15)
	{

		for (a = 0; a <= n; a++)
		{

			for (b = 0; b <= n; b++)
			{

				if ((a * b) < 10)
				{
					if (a != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((b * a) + '0');
				}

				else if ((b * a) < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((((a * b) / 10) % 10) + '0');
					_putchar(((b * a) % 10) + '0');
				}

				else if ((b * a) < 1000)
				{
					_putchar(' ');
					_putchar((((a * b) / 100) % 10) + '0');
					_putchar((((b * a) / 10) % 10) + '0');
					_putchar(((b * a) % 10) + '0');
				}
			if (b != (n))
			{
				_putchar(',');
			}

			}

		_putchar('\n');

		}

	}

}
