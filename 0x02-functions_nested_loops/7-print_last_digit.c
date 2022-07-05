#include "main.h"

/**
 *print_last_digit - checkes lower case
 *@n: number
 * Return: return n%10
 */
int print_last_digit(int n)
{
	if (n > 0)
		return (n % 10);
	else if (n < 0)
		return (-1 * (n % 10));
	else
		return (0);
}
