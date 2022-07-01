#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int a = 97;
	int b = 65;

	while (a < 123)
	{
		printf("%c", a);
		a++;
	}
	while (b < 91)
	{
		printf("%c", b);
		b++;
	}
	printf("\n");
	return (0);
}
