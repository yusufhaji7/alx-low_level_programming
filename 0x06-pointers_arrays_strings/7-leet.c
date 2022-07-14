#include "main.h"

/**
 * leet - encrypts
 * @dest: string
 *
 * Return: dest
 */

char *leet(char *dest)
{
	int i;
	int j;
	char array[] = "ol_ea__t";

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; array[j] != '\0'; j++)
		{
			if (dest[i] == array[j] || dest[i] == (array[j] - 32))
			{
				dest[i] = j + '0';
			}
		}
	}
	return (dest);
}
