#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number paramter
 *
 * Return: 1 if n is a prime number, 0 if it isn't
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number paramter
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if it isn't prime
 */
int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}
