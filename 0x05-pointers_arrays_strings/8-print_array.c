#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array
 * @a: name of the array
 * @n: number of arrays
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d,", a[count]);
		count++;
	}
	printf("\n");
}
