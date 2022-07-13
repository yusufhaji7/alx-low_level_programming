#include "main.h"

/**
 * reverse_array - reverses an array
 *@a: an array
 *@n: number of elemnets
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i <= n)
	{
		if (i == n)
		{
			_putchar(a[n]);
		}
		else
		{
			_putchar(a[n]);
			_putchar(',');
			_putchar(' ');
		}
		--n;
	}
	_putchar('\n');
}
