#include "main.h"

/**
 * _puts - prints a string
 * @str: characters to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
	char c = '\n';

	write(1, &c, 1);
}
