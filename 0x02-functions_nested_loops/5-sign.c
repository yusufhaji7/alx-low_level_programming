#include "main.h"

/**
 *print_sign - checkes lower case
 *@n: tested number
 * Return: return 0 or 1
 */
int print_sign(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (1);
	else
		return (0);
}
