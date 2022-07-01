#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int a = 97;

	while (a < 123)
	{
		if (a == 113 || a == 101)
			continue;
		else
			putchar(a);
		a++;
	}
	return (0);
}
