#inclcude "main.h"

/**
 * print_diagonal - prints diagonal with
 * @n: number of diagonals
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		int j = 0;

		while (j <= i)
		{
			putchar(' ');
			j++;
		}
	putchar('\\');
	putchar('\n');
	i++;
	}
}
