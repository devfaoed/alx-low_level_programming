#include "main.h"

/**
 * int_index - searches for an integer
 * @array: array of ints
 * @size: number of elements in array
 * @cmp: comparison function
 * Return: Index of first element for which the cmp function does not return 0
 * otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, c;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		c = cmp(array[i]);
		if (c != 0)
			return (i);
	}
	return (-1);
}
