#include "main.h"

/**
 * array_iterator - executes a function on each element of array
 * @array: array of elements
 * @size: size of array
 * @action: funtion pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int s = size, i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < s; i++)
		{
			action(array[i]);
		}
	}
}
