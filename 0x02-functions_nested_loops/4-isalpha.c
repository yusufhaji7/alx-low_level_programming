#include "main.h"

/**
 *_isalpha - checkes lower case
 *@c: tested letter
 * Return: return 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 48 && c <= 90))
		return (1);
	else
		return (0);
}
