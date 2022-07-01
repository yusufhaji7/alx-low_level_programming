#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{

	for (int a = 97; a < 123; a++)
	{
		if (a == 113 || a == 101)
			continue;
		putchar(a);
	}
	putchar('\n')
	return (0);
}
