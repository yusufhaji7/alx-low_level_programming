#include "main.h"

/**
 * print_alphabet - prints a to z 10 times
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int a = 97;
	int b = 1;

	while (b <= 10)
	{
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		b++;
		_putchar('\n');
	}
}
