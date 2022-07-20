#include "main.h"

/**
 * factorial - gives the factorial of a number
 * @n: number for the factorial
 *
 * Return: n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
