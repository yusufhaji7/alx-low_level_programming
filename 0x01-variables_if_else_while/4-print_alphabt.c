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
		{
			a++;
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
