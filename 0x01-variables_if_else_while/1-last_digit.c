#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	while (a > 10 || a < -10)
	{
		if (n < 100 || n > -100)
		{
			a = n % 10;
			break;
		}
		n = n / 10;
		a = n % 10;
	}

	if (a > 5)
		printf("Last digit of %d is %d and is greater 5\n", n, a);
	else if (a < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	else if (a == 0)
		printf("Last digit of %d is %d and is 0\n", n, a);
	return (0);
}
