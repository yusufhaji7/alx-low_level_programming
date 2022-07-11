#include "main.h"

/**
 * swap_int - resets a to b and b to a
 *@a: number 1
 *@b: number 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int *pointer_1 = a;
	int *pointer_2 = b;
	int a_value;

	a_value = *a;
	*pointer_1 = *pointer_2;
	*pointer_2 = a_value;
}
