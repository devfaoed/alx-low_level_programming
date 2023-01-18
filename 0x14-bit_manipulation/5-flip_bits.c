#include "main.h"

/**
 * flip_bits - returns the number of bits to be flipped
 * to get one num from another
 *
 * @n: base number
 * @m: comparison number
 *
 * Return: number of different bits (flipped bits)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff_bits = n ^ m;
	unsigned int count = 0;

	while (diff_bits)
	{
		if (diff_bits & 1)
			count++;
		diff_bits >>= 1;
	}
	return (count);
}
