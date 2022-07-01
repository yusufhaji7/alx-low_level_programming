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
		printf("%c", a);
		a++;
	}
	printf("\n");
	return (0);
}
