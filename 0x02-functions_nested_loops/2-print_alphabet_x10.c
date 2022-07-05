#include "main.h"

/**
 * print_alphabet_x10 - prints a to z 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int b = 1;

	while (b <= 10)
	{
		int a = 97;

		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		b++;
		_putchar('\n');
	}
}
