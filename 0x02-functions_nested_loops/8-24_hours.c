#include "main.h"

/**
 * jack_bauer - prints minutes of 24 hours
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a = 0;

	while (a <= 2)
	{
		int b = 0;

		while (b <= 3)
		{
			int c = 0;

			while (c <= 5)
			{
				int d = 0;

				while (d <= 9)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
				d++;
				}
			c++;
			}
		b++;
		}
	a++;
	}
}
