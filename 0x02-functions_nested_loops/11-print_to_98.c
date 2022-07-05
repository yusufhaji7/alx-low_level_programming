#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98
 *@n - number beginning
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n != 98)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			--n;
		}
		printf("%d", 98);
	}
	else if (n < 98)
	{
		while (n != 98)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			n++;
		}
		printf("%d", 98);
	}
	else
		printf("%d", 98);
}
