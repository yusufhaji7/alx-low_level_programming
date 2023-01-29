#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an
 *array of integers using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index OR -1
 **/


int linear_search(int *array, size_t size, int value)
{

size_t i = 0;
if (array != NULL)
{
for (i = 0 ; i <= size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
}
return (-1);

}
