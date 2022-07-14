#include "main.h"

/**
 * cap_string - changes to capital after some specific characters
 * @dest: string
 *
 * Return: dest
 */

char *cap_string(char *dest)
{
	int i, j;
	char array[] = " \t\n,;.!?\"(){}";

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (dest[0] >= 97 && dest[0] <= 122)
			dest[0] = dest[0] - 32;
				for (j = 0; array[j] != '\0'; j++)
					if (dest[i] == array[j] && dest[i + 1] >= 97 && dest[i + 1] <= 122)
						dest[i + 1] = dest[i + 1] - 32;
	}
	return (dest);
}
