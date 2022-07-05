#include "main.h"

/**
 *print_last_digit - checkes lower case
 *@n: number
 * Return: return n%10
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	else if (n < 0)
	{
		n = -1 * (n % 10);
		_putchar(n + '0');
		return (n);
	}
	else
	{
		_putchar(n + '0');
		return (0);
}
