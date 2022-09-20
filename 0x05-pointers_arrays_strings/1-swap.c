#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to var a
 * @b: pointer to var b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*b = x;
	*a = y;
}
