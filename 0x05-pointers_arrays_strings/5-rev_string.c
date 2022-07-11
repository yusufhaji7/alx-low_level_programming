#include "main.h"

/**
 * rev_string - prints in reverse order
 * @s: text to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *a = s;
	char n[100000];
	short count = 0;

	while (*s != '\0')
	{
		n[count] = *s;
		s++;
		count++;
	}
	count = 0;

	while (s > a)
	{
		s--;
		*s = n[count];
		count++;
	}
}
