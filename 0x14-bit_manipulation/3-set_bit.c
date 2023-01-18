#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to memory address containing an integer
 * @index: given index
 * Return: 1 if it worked, -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	*n |= (1 << index);
	return (1);
}
