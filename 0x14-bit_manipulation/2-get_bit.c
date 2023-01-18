#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be checked
 * @index: index
 * Return: val of bit at index or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = n >> index;

	return (bit & 1);
}
