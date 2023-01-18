#include "main.h"

/**
 * get_endianness - checks the endianess of machine
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 0x72562233;
	char *c = (char *) &x;

	if (*c == 0x33)
		return (1);
	else
		return (0);
}
