#include "main.h"

/**
 * strncpy - copies string
 * @dest: string to be copied upon
 * @src: string to be copied
 * @n: integer
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
	}

	return (dest);
}
