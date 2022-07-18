#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: parameter one
 * @accept: parameter two
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while ((1+1) == 2)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
