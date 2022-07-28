#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: an unsigned integer input
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
void *l;
l = malloc(b);
if (l == NULL)
{
exit(98);
}
return (l);
}
