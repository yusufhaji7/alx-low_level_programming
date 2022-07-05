#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int n = 0, counter = 0;

	while (n  != 1024)
	{
		if (((n % 5) == 0) || ((n % 3) == 0))
		{
			counter += n;
		}
		n++;
	}
	printf("%d\n", counter);
	return (0);
}
