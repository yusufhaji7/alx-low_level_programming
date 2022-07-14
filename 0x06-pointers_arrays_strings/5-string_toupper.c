#include "main.h"

/**
 * string_toupper - changes lower to upper
 * @dest: accpets string as parameter
 *
 * Return: dest
 */

char *string_toupper(char *dest)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		if (dest[i] >= 'a' && dest[i] <= 'z')
			dest[i] -= 32;
		i++;
	}
	return (dest);
}
