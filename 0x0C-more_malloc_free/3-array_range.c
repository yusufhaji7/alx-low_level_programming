#include "main.h"
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (NULL);
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
}
